
This project focuses on teaching a real drone how to move autonomously by first training it inside a photorealistic Unreal Engine simulation. Using reinforcement learning, the drone learns basic and advanced movement behaviours—such as stabilising itself, navigating through environments, and avoiding obstacles—before the trained model is transferred to the physical drone.

## Envrionment Reference
The drone's trajectory begins in the living room and proceeds up a staircase. At the landing, it moves forward into the hallway, makes a left turn, and continues ascending the next stair segment.

The operational environment presents several structural limitations. The staircase is narrow, restricting horizontal manoeuvrability, and the hallway features irregular roof geometry that reduces and varies the available vertical clearance. Additional architectural elements—such as angled ceilings, protrusions, and elevation changes—introduce further obstacles that increase the complexity of autonomous navigation.

![](/assets/environment.png)

## Drone Model

The drone used in this project is the DJI Ryze Tello. It includes a vision‑positioning system with a downward‑facing camera and a 3D infrared module located on the underside of the aircraft. The drone operates at altitudes ranging from 1 to 98.4 ft. Its specifications are:

### Specifications
|Model| TLW004 | 
| --- |--- | 
|Weight| 87 gr | 
|Max Speed| 28.8 kph | 
|Max flight time| 13 minutes | 
|Max image size| 2592x1936 |
|Video recording | HD: 1280x720 |
| FPS | 30 |
| Video format | MP4 |

![](/assets/drone-model.png)


## Project Overview 

- Create a virtual replica of the tree environemntes living room, stairs and room. 
- 
- Create different indoor environments to teach basic movement behaviour to the drone 

- Train a virtual drone using reinforcement learning, allowing it to learn movement, stability, and navigation behaviours through interaction with the simulated environment.

- Enable the drone to understand and react to the virtual space, learning how to avoid obstacles, follow paths, and move autonomously based on sensor inputs.

- Export the trained policy and deploy it on a real Ryze Tello (DJI), enabling the physical drone to perform autonomous movement in the real world using the skills learned in simulation.

## Progress Documentation 

### 1.  3D environment creation

The goal is to generate realistic 3D environments that match the real world as closely as possible. I’m currently testing four options to replicate this real world fidelity:

#### Photogrametry tools (Geometry recosntruction ).

After several weeks of heavy testing, I evaluated the following set of photogrammetry tools. Below you'll find a summary of results and, further on, examples of the output obtained.

- `Polycam`: Produces deficient results, not accurate enough for reliable drone-training environments. Tested with an iPhone 13 Pro, iPhone 15, and iPhone 16 Pro Max.
- `Scanniverse`: Decent and free, but scenes end up heavily distorted, so like Polycam it's not a suitable tool for this purpose.
- `COLMAP`: I ran into issues importing images into the scene — the workflow is quite tricky. It's also very resource-intensive, and generating a single scene takes a long time, which is not what I needed.
- `RealityScan`: So far, the app delivering the best results — unfortunately, for Linux users it only runs under Wine, which means no export, import, or mesh manipulation tools are available. A real shame. I tried using Boxes to set up a VM with Windows 10, but Boxes doesn't allow GPU resource assignment, making it impossible to run Unreal Engine or even complete the image alignment step.

***Note: I can definitely go further by setting up a better VM with GPU configuration, but what I realized is that photogrammetry is heavily dependent on local hardware resources. My RTX 5060 with 8 GB VRAM and 16 GB RAM is a decent setup, but it starts falling behind when processing scenes with more than ~400 images for reconstruction. More serious photogrammetry projects typically require up to 1,000 images. Another constraint is that Phone cameras are not suitable for quality indoor captures either. If you're interested in going deeper, I highly recommend this YouTube video, which covers a lot of valuable info about the topic: https://www.youtube.com/watch?v=tjOZoX4DZGI&t=90s***


![image](/assets/image.png)

#### Gaussian Splats tools (Generative techniques)

On the other side, I've been exploring generative techniques as well as Gaussian Splats. So far, my favorite tool — and the one I'm going to use to generate the replica of my environment — is Marble Labs. I'm also going to use Gaussian Splats for this pipeline.
