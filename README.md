
<pre>🟣 Description</pre>
This project focuses on training a drone inside `Unreal Engine` and deploying the learned behaviour onto a real-world drone. I'll be working with `robotic simulation` in Unreal, developing `reinforcement learning policies`, potentially exploring `Agentic LLMs`, and using `3D world creation tools`.

<pre>🟣 Real world description</pre>
The drone's trajectory begins in the living room and proceeds up a staircase and into my room. The staircase is narrow, and architectural elements such as an angled ceiling introduce further obstacles that increase the complexity of autonomous navigation.

<pre>🟣 Technical stack</pre>

- `Unreal Engine 5.6`
- `Linux Fedora 42`
- `NanoGS - gaussians splatting processing`
- `unrealcv`

<pre>🟣Hardware Setup </pre>

| Component | Specification                                | 
|-----------|----------------------------------------------|
| `CPU`     | Intel Core i5-14400F (10 cores / 20 threads) | 
| `GPU`     | NVIDIA GeForce RTX 5060 (8 GB VRAM)          | 
| `RAM`     | 16 GB                                        | 
| `STORAGE` | 1 TB NVMe SSD         | 

<pre>🟣 Drone Model</pre>

![](assets/ilya-landshut-1.jpg)

The drone used in this project is the `DJI Ryze Tello`. It includes a vision‑positioning system with a frontal camera and a 3D infrared module located on the underside of the aircraft.

<pre>🟣 Project Overview</pre>

```angular2html
- Design the pipeline with the best tools I can test to create a virtual replica of three environments (living room, staircase, and bedroom) that closely match the real world
- Research databases to train the drone across diverse indoor environments and expose it to varied movement scenarios
- Setup unreal for simulation (drone physics + camera sensor + environment import)
- Train a virtual drone using reinforcement learning, enabling it to learn movement, stability, obstacle avoidance, and autonomous navigation through interaction with the simulated environment
- Export the trained policy and deploy it on a real Ryze Tello (DJI), enabling the physical drone to perform autonomous movement in the real world using the skills learned in simulation
```

<pre>🟣 3D environment creation for training </pre>

🟣 1. Progress Documentation 

The `Ryze Tello (DJI)` primarily perceives its environment through its forward-facing camera, making realistic visual environments critical for training. That's why my focus is on representing the world as realistically as possible. Below you will find the different techniques I've explored to achieve this goal, and further on, my pipeline for this task.

🟣 2. Geometry reconstruction tools (point clouds)

After weeks of testing, I decided to move on from photogrammetry techniques for the following reasons:

```angular2html
- Heavily dependent on local hardware. My RTX 5060 with 8 GB VRAM and 16 GB RAM is a decent setup, but it falls behind when processing scenes with more than 400 images. Serious photogrammetry projects can require up to 5,000 images for indoor environments.
- Many apps claim you can do photogrammetry with a phone, but phone cameras simply don't deliver the quality needed. Dedicated cameras like the Canon 450D with proper lenses give better results, but cost around £150 used — not worth the investment for this project.
- Shooting technique has a real impact on results. Blur is the enemy of photogrammetry, so you often end up reshooting locations multiple times, which is time-consuming.
```

Below is a summary of the tools I tested and their results:

| Tools | Results                                                                                                                                                                                                                                                                                                                                                                             | Image                         |
|-------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------------------|
|`Polycam`| Produces deficient results, not accurate enough for reliable drone-training environments. Tested with an `iPhone 13 Pro`, `iPhone 15`, and `iPhone 16 Pro Max`.                                                                                                                                                                                                                           | ![image](/assets/Polycam.png) |
|`RealityScan`| So far, the app delivering the best results, unfortunately, for `Linux` users it only runs under `Wine`, which means no export, import, or mesh manipulation tools are available. | ![image](/assets/image.png)   |

🟣 3. Generative techniques tools (gaussian splats)

Alongisde, I've been exploring generative techniques and so far, my favorite tool and the one I'm going to use to this step is `Marble World Labs`.

![](assets/example.png)

🟣 4. 3DGS in Unreal Engine

Natively, `Unreal Engine` doesn't support `3D Gaussian Splats`, so I had to search for plugins. Most of them were also only packaged for `Windows`, which is a very common issue with plugins. Rebuilding and configuring the source code for `Linux` compatibility isn't too much effort in theory, but most public repos don't include the plugin's source code, making it impossible to get them working on `Linux`. This is what I found with the following plugins:

| Plugin                               | Link                        | Opinion |
|--------------------------------------|-----------------------------|---------|
| `unreal-splat`                       | [GitHub](https://github.com/JI20/unreal-splat) | Open source, compiles on Linux, but I haven't tested it yet. |
| `voligna`                            | [Website](https://web.volinga.ai/#VolingaPlugin) | Paid plugin, doesn't compile on any Linux version I tried. Source code is not available, so there is nothing I can do about it. |
| `MSLabsGaussian`                     | [GitHub](https://github.com/mlslabs/MLSLabsGaussianSplattingRenderer-UE) | Open source but no source code available. Compiled plugin works on Windows only. |
| `xverse`                             | [GitHub](https://github.com/xverse-engine/XScene-UEPlugin) | Open source but no source code available. Compiled plugin works on Windows only. |
| `NanoGaussianSplatting`              | [GitHub](https://github.com/TimChen1383/NanoGaussianSplatting) | Open source and the best one! Compiles on Linux and mimics Nanite's rendering system, allowing efficient 3DGS rendering. |
| `GaussianSplatting`                  | [GitHub](https://github.com/Italink/GaussianSplattingForUnrealEngine) | Open source, compiles on Linux, but not optimised and very strict with .ply file formatting — breaks easily with compressed .ply files. |

🟣 5. Virtual environment pipeline

![](assets/pipeline.svg)

🟣 3DGS Database pre-training environments

On Hugging Face there is a dataset available named `InteriorGS`. It provides high-quality 3D Gaussian Splatting representations with semantic bounding boxes and occupancy maps for each scene. It contains a total of 1,000 environments.
> link: https://huggingface.co/datasets/spatialverse/InteriorGS

<pre>🟣 Unreal simulation setup </pre>

In this step, it is important to set up and import into Unreal the following elements:
```
- The 3D model of the drone.
- The 3DGS of the real-world replica environment, including its bounding boxes and skeletal mesh via NanoGaussianSplatting.
- The 3DGS pre-training environments (InteriorGS dataset).
```

<pre>🟣 3D Drone model</pre>

The 3D model have to match with the 3D world in :

🟣 1. Body dimensions 

| Description                  | Dimension (BBOX) | 
|------------------------------|------------------|
| `body`                       | 98x92.5x41 mm    | 
| `body + propellers`          | 174x170x41 mm    | 
| `body + propellers + guards` | 188x183x46 mm    | 

🟣 2. Frontal cameras 

| Property          | Real Tello value |
|-------------------|------------------|
| `Position on body` | Front-center, slightly below top   | 
| `FOV`             | 82.6°   |
| `Resolution`      | Resolution   |
| `Weight`            | 87 gr               | 
| `Max Speed`         | 28.8 kph            |
| `Max image size`    | 2592x1936           |
| `Video recording`   | HD: 1280x720        |
| `FPS`               | 30                  |

🟣 3. Vision Positioning System 

| Property             | Real Tello value | 
|----------------------|------------------|
| `camera`             | front              | 
| `3D infrared module` | Underside        | 

<pre>🟣 The 3DGS of the real-world replica environments </pre>

TODO: Curation and selection of the envs that I will use for training. at this stage im thinkin in up to 50 env/

🟣 6. Pre-Validation: Pipeline Performance and Architecture Decisions

Before committing to a full training pipeline, I needed to answer a practical question: **can this stack actually run fast enough to train RL?**

The challenge is that this pipeline stacks two computationally expensive processes — Unreal Engine rendering and reinforcement learning training. Each one alone is resource-heavy. Combined, poor architectural choices could make training unfeasibly slow. So before scaling to 50 environments, I ran a series of tests to validate my assumptions and benchmark the stack.

---

🟣 6.1 Why Unreal Engine Is Expensive (and Why That Matters for RL)

Unreal Engine is a DCC (Digital Content Creation) tool built for cinematic-quality rendering. That power comes at a cost:

- **Shader compilation:** The first time you open a project, Unreal compiles thousands of shaders. These get cached for subsequent runs, but the initial hit is significant — and every new environment triggers new compilations.
- **Editor overhead:** Running inside the Unreal Editor loads the full UI, debug tools, viewport rendering, and asset management systems. All of this consumes GPU and CPU resources that could otherwise go to simulation and training.
- **Memory footprint:** Between the editor, the 3D Gaussian Splat visual layer, and the SAGE-3D collision meshes, a single environment can consume several GB of VRAM and RAM.

For a sim2real pipeline where the RL agent needs thousands of episodes, every wasted frame-per-second compounds into hours of lost training time (biggest concern in the sim phase)

🟣 6.2  What I Tested

🟣 6.2.1 Editor Mode vs. Packaged Builds

I ran the same environment in two configurations, fetching 300 frames with shape (84, 84, 3):

Note: When analyzing GPU and CPU performance with btop, I noticed that the CPU cores were heavily loaded while the GPU was barely utilized during frame fetching.

| Metric        | Editor Mode | Packaged Build |
|---------------|-------------|----------------|
| sustained FPS | 3.0         | 37.7           |
| total time    | 100.00s     | 7.97 s         |
| avg per frame | 333.3 ms    | 26.6 ms        |

**Result:** Packaged builds gave a significant FPS improvement over running inside the editor. This makes sense — the packaged build strips out the editor UI, debug tools, and asset browser, leaving only the runtime renderer and game logic. For training, there is no reason to run from the editor.

**Decision:** All 50 environments will be packaged into standalone builds before training begins. The upfront cost of packaging is paid once; the FPS gain compounds across every training episode.


🟣 6.3 Why UnrealCV as the RL Bridge

I needed a plugin that could:

1. Accept actions from a Python-based RL framework (movement, rotation commands)
2. Return observations (RGB, depth) back to Python
3. Run over TCP so the gym and the renderer can be separate processes
4. Work with packaged builds, not just the editor

UnrealCV checks all of these. It exposes a TCP server (default port 9000) inside the Unreal process, and the Python side connects as a client. The communication loop is:

```
Python Gym  ---(action)--→  UnrealCV TCP  --→  Drone Pawn moves
Python Gym  ←--(obs/reward)---  UnrealCV TCP  ←--  Camera captures frame
```

This architecture also means I can run multiple packaged environments in parallel on different ports for future scaling.


- https://www.youtube.com/watch?v=tjOZoX4DZGI&t=90s
- https://ilyalandshut.artstation.com/projects/xzWeDY