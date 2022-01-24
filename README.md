# LED Turntable Project

This is inspired by the [Brian Eno Turntable art project](https://www.paulstolper.com/artists/56-brian-eno/works/143-turntable/80178-brian-eno-turntable-2021/). However, since those aren't for sale, I figured it would be fun to build my own. This design is my own and I have no insight in to how the Brian Eno turntable was designed or assembled.

The table, in its current design, has a footprint of 18 in x 16 in.

## What's in the repo

- 3D models and .step files

  For the platter ring LED mount, I've included the model as a single piece for large printers, and split in to quadrants for smaller printers ("BL" = bottom left, "TR" = top right, etc)

  The platter mount is intended to hold up a U-Turn Audio Orbit spindle set. I chose this because I harvested it from another turntable. If I can find some OEM spindle mounts or DIY one together, I'll create a new model.

- Arduino Sketch

  This is the sketch for an Arduino microcontroller to control the LEDs.

## Bill of materials

*NOTE: This is **not a complete list**, as the project is still in progress.*

- **Addressable LED strip**

  I used WS2812B strips, but the Arduino can control multiple types of addressable LEDs.

  *Tip: The denser the better*

- **Matte white filament**

  I printed all of the models in white matte fiber PLA I found that this is pretty good for keeping the light "contained" without using a darker color of filament.

- **Acrylic platter**

  I purched [U-Turn Audio's Acrylic Platter](https://uturnaudio.com/products/acrylic-platter).

- **Frosted spray paint**

  This is what I used to diffuse the inside of the acrylic shell. You may find better ways to handle diffusion.

- **#4 x 1.2 in flat head screws**

## TBD / Coming soon

- Pictures/video of what this thing looks like
- Completed BOM (I'm still sorting out switches, wire gauges, power supplies, etc.)
- Wiring schematic
- Tonearm design and BOM
- Assembly instructions
- Final count of mounting screws needed.