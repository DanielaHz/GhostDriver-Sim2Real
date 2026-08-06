from unrealcv import api
import numpy as np
import time

# Connect. Set resolution LOW — you train on 84x84, so request small frames.
# NOTE: the `resolution` kwarg above is not actually applied by the client (see
# unrealcv/api.py: "the resolution is not used"), so the size must be set explicitly.
client = api.UnrealCv_API(port=9000, ip='127.0.0.1', resolution=(84, 84))
client.client.request('vset /camera/0/size 84 84')

N = 3000
print(f"Fetching {N} frames...")

# Warm up (first few calls are always slower)
for _ in range(5):
    client.get_image(0, 'lit')

start = time.time()
for i in range(N):
    img = client.get_image(0, 'lit')   # the round trip you're measuring
elapsed = time.time() - start

fps = N / elapsed
print(f"Frames: {N}")
print(f"Total time: {elapsed:.2f}s")
print(f"Avg per frame: {elapsed/N*1000:.1f} ms")
print(f"Sustained FPS: {fps:.1f}")
print(f"Frame shape: {img.shape}")