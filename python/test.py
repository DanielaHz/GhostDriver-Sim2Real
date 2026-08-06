import os
import unrealcv

client = unrealcv.Client(('localhost', 9000))  # config the port according to your setting
client.connect()

if not client.isconnected():
    print('Could not connect to UnrealCV. Is the Unreal Engine game running with the plugin enabled?')
else:
    print('Connected to UnrealCV!')

    # List objects in the scene
    scene_objects = client.request('vget /objects').split(' ')
    print('Found %d objects, e.g. %s' % (len(scene_objects), scene_objects[:5]))

    # Read current camera pose
    loc = client.request('vget /camera/0/location')
    rot = client.request('vget /camera/0/rotation')
    print('Camera location: %s' % loc)
    print('Camera rotation: %s' % rot)

    # Move the camera up by 50 units and capture an image
    x, y, z = [float(v) for v in loc.split(' ')]
    client.request('vset /camera/0/location %f %f %f' % (x, y, z + 120))
    out_path = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'lit.png')
    filename = client.request('vget /camera/0/lit %s' % out_path)
    print('Saved image to %s' % filename)
    
    # Speed of response
    fps = client.request('vrun stat FPS')
    print('FPS are: %s' % fps)
    

    client.disconnect()
