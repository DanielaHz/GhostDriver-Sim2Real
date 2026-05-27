This project focuses on training a drone inside Unreal Engine and deploying the learned behaviour onto a real-world drone. I'll be working with robotic simulation in Unreal, developing reinforcement learning policies, potentially exploring LLMs, and using 3D world creation tools.

## Real word description

The drone's trajectory begins in the living room and proceeds up a staircase and into my room. The staircase is narrow, and architectural elements such as an angled ceiling introduce further obstacles that increase the complexity of autonomous navigation.

## Technical Stack

- `Unreal Engine 5.6`
- `Linux Fedora 42`

## Drone Model

The drone used in this project is the DJI Ryze Tello. It includes a vision‑positioning system with a downward‑facing camera and a 3D infrared module located on the underside of the aircraft. The drone operates at altitudes ranging from 1 to 98.4 ft. Its specifications are:

### Drone Specifications

 ![](assets/DJI.png) 

|Model| TLW004              | 
| --- |---------------------| 
|Weight| 87 gr               | 
|Max Speed| 28.8 kph            | 
|Max flight time| 13 minutes          | 
|Max image size| 2592x1936           |
|Video recording | HD: 1280x720        |
| FPS | 30                  |
| Video format | MP4                 |

## Project Overview 

- Design the pipeline with the best tools I can test to create a virtual replica of three environments (living room, staircase, and bedroom) that closely match the real world
- Research databases to train the drone across diverse indoor environments and expose it to varied movement scenarios
- Train a virtual drone using reinforcement learning, enabling it to learn movement, stability, obstacle avoidance, and autonomous navigation through interaction with the simulated environment
- Export the trained policy and deploy it on a real Ryze Tello (DJI), enabling the physical drone to perform autonomous movement in the real world using the skills learned in simulation

## Progress Documentation 

### 3D environment creation

The Ryze Tello (DJI) primarily perceives its environment through its forward-facing camera, making realistic visual environments critical for training. That's why my focus is on representing the world as realistically as possible. Below you will find the different techniques I've explored to achieve this goal, and further on, my pipeline for this task.

I can definitely go further by setting up a better VM with GPU configuration, but what I realized is that photogrammetry is heavily dependent on local hardware resources. My RTX 5060 with 8 GB VRAM and 16 GB RAM is a decent setup, but it starts falling behind when processing scenes with more than ~400 images for reconstruction. More serious photogrammetry projects typically require up to 1,000 images. Another constraint is that Phone cameras are not suitable for quality indoor captures either. If you're interested in going deeper, I highly recommend this YouTube video, which covers a lot of valuable info about the topic:

### Geometry reconstruction tools (point clouds)

After weeks of testing, I decided to move on from photogrammetry techniques for the following reasons:

- Heavily dependent on local hardware. My RTX 5060 with 8 GB VRAM and 16 GB RAM is a decent setup, but it falls behind when processing scenes with more than 400 images. Serious photogrammetry projects can require up to 5,000 images for indoor environments.
- Many apps claim you can do photogrammetry with a phone, but phone cameras simply don't deliver the quality needed. Dedicated cameras like the Canon 450D with proper lenses give better results, but cost around £150 used — not worth the investment for this project.
- Shooting technique has a real impact on results. Blur is the enemy of photogrammetry, so you often end up reshooting locations multiple times, which is time-consuming. 
- Not Linux use friendly tools

Below is a summary of the tools I tested and their results:

| Tools | Description | Image                         |
|-------|-------------|-------------------------------|
|`Polycam`| Produces deficient results, not accurate enough for reliable drone-training environments. Tested with an iPhone 13 Pro, iPhone 15, and iPhone 16 Pro Max. | ![image](/assets/Polycam.png) |
|`Scanniverse`| Decent and free, but scenes end up heavily distorted, so like Polycam it's not a suitable tool for this purpose|                               |
|`COLMAP`| I ran into issues importing images into the scene, the workflow is quite tricky. It's also very resource-intensive, and generating a single scene takes a long time, which is not what I needed|                               |
|`RealityScan`|So far, the app delivering the best results, unfortunately, for Linux users it only runs under Wine, which means no export, import, or mesh manipulation tools are available. A real shame. I tried using Boxes to set up a VM with Windows 10, but Boxes doesn't allow GPU resource assignment, making it impossible to run Unreal Engine or even complete the image alignment step| ![image](/assets/image.png)   |

### Generative techniques tools (gaussian splats)

Alongisde, I've been exploring generative techniques and so far, my favorite tool and the one I'm going to use to this step is `Marble Labs`, great gaussian splats reconstruction.

![](assets/Marble.png)

Now, I said I will use unreal to import and render the gaussian splast, natively unreal doesnt support 3DGS so I was looking to differnt plugins to help me, thsi si my summary of the repos I tested.

### Virtual environment pipeline

to import the 3d Gaussian into unreal engine I will use GSplugin 


# database im going to use to ttrain the model


# the paper with the drone specification 


## Resources 
- Photogrametry tutorial: https://www.youtube.com/watch?v=tjOZoX4DZGI&t=90s
