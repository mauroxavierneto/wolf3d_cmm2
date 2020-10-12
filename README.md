# wolf3d_cmm2
Wolfenstein 3D version from scratch for Colour Maximite 2
(YOU NEED AT LEAST THE FIRMWARE VERSION 5.05.06 FOR CMM2 TO PLAY THIS)

Changelog:

Version 0.5a - 2020-10-12 -------------------------------------

Implemented / Fixed:
- General optimizations
- Fixed bug where the boss was unable to get through the door
- Implemented framebuffer for textures and objects
- Some sound effects now are using MOD samples, giving more speed to the game
- Fixed some bugs on the enemies when spotting the players

Here are some limitations and known bugs in this version:
- In the last stage when you try to finish it will give you an error


Version 0.4a - 2020-07-26 -------------------------------------

Implemented / Fixed:
- Little optimizations on auto graphics settings
- Optimized raycast engine (about 1,5 FPS)
- Fixed vertical texture alignment
- Fixed enemies collisions with walls
- Fixed player collisions with walls


Version 0.3a - 2020-07-23 -------------------------------------

Here are some limitations and known bugs in this version:
- Some enemies see you through walls.
- Some enemies shot at you through walls.
- Random blocks appear when loading a map from stage to another, even cleaning all arrays.

Implemented / Fixed:
- A little gain of speed, about 2-3 FPS.
- Changed automatic graphics from 7-10 FPS to 8-12 FPS.
- Fixed tileset "pool of blood".
- Fixed Keys that are not cleared correctly when changing the stage.


Version 0.2a - 2020-07-19 -------------------------------------

Here are some limitations and known bugs in this version:
- It´s far away from an optimized game, some parts if you don´t choose auto graphic level can be slow as hell!
- Enemies can in rare occasions trespass walls.
- Have fun, you can´t die yet!
- The doors don´t have depth in the middle of the wall as the original game.
- The secret passages don´t move as the original for the same limitation as to the doors (but it works!)
- Objects and enemies can appear after or before the walls.
- Enemies don´t have z-order yet to appear from back to front correctly.
- In the last floor (9) when you kill the boss and go to the end, the game will show an error because there is no episode finish yet.
- The Boss can´t pass through an open door sometimes.
- There is no joystick support yet (waiting for my Wii classic controller)
- The shift key is an almost a must to move and rotates to the sides if you are not aiming an enemy, otherwise, the current slow speed can drive you nuts ;)
- You can´t custom the keyboard keys yet.
- The enemies don´t have eight axis positions and don´t obey to the walking flow like the original game. They always see you from the front as many ports of the game.
- The difficult level is not well balanced.
- I´m already said the game isn´t optimized yet? ;)

Implemented / Fixed:
- It´s possible to read any Wolfenstein stage exported from FLR format
- Brown guards, ss, dogs, officers and the first boss are almost full implemented
- I think the music is better than the original
- The textures size and resolution are preserved (64x64)
- Enemies can open doors and chase you
- I think it´s fun to play if you could ignore some speed constrains
- See the controls list, you can change window size with F5 and made it zoom with F6... And can have something like the resolution of Wolf3D from SNES or Gameboy
- I remade some game arts to respect German people, but there are other things that I will do better sometime.


Version 0.1a - 2020-07-05 -------------------------------------

Initial Tests for first Youtube video
