## About the project

![alt text](https://www.buas.nl/sites/default/files/2018-09/Logo%20BUas_RGB.png)

This was a university project from my Year 1 Block A studies at BUas. It is a reimagined version of Pitfall 3.

I'm most proud of the <b>freeze/rewind time</b> feature!

I still have a lot of ideas for expanding upon this, one day.

## Getting started

Run the solution and build the project. All required libraries are included.

The debug configuration will show the hitboxes and display the current state of each actor.

Both debug and release configurations have only been tested on the x64 platform.

## How to play

### Overview
The goal is to reach the end of the level (which looks like a cave). Throw rocks to damage enemies. Earn points by defeating enemies and collecting coins. The points do nothing.

### Rewinding time
When you rewind time, everything will be restored to that earlier moment - including you (and your HP) and the position of all enemies, rocks, and arrows. If you rewind to a moment before a gold coin was collected, it will be removed from you and placed back on the field. Blue coins will stay with you forever once they are collected.

### Controls
AD to walk left/right. WS to climb up/down a vine.

J to jump (when you jump into a vine you will automatically grab it; jump again to get off the vine).

K to throw rocks (touch a rock pile to collect some first).

Hold I to freeze time. While time is frozen, use AD to move the current time up to 2 seconds into the past.

## Resources

#### Development

[https://github.com/jbikker/tmpl8] The template code used as a base.

[https://github.com/nlohmann/json] A wonderful JSON library.

[https://github.com/jpvanoosten/miniaudio] A super easy-to-use audio library.

[https://github.com/YulyaLesheva/Sweep-And-Prune-algorithm] A great introduction to AABB collision testing.

[https://www.youtube.com/watch?v=8JJ-4JgR7Dg] An excellent method for robust AABB collision testing.

[https://gameprogrammingpatterns.com/] A very digestable explanation of programming patterns. This helped me to use the Command, Flyweight, Observer, State, and Object Pool patterns for the first time.

[https://www.mapeditor.org] The map editor.

#### Assets

[https://penusbmic.itch.io/free-dungeon-ruins-tileset] Provides the amazing tileset art and player sprite.

[https://penusbmic.itch.io/dungeonenemy1] The equally amazing enemy sprites.

No music / sound credits because that was all made by me :)
