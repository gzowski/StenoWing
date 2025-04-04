# StenoWing28 - Rev 2
28 key staggered Stenography keyboard without number row
![stenowing28](https://github.com/gzowski/StenoWing/blob/main/Images/stenowing_light.jpg)

## Features
* 28 Key layout
* Per key RGB LED's
* Javelin firmware (Reqires RP2040 pro micro with 16MB storage)
* Vertical stagger
* Double tap #2 to change mode and configure RGB

## Parts

| Part | Quantity     | Description                |
| :-------- | :------- | :------------------------- |
| Diodes| 28  | Through-hole 1N4148 |
| Microcontroller | 1 | Pro Micro RP2040 with 16MB Storage |
| Switches | 28 | MX or Choc V1 (67 instead of rotary encoder) |
| Keycaps  | 28 | 1u keycaps |

## Optional Parts

| Part | Quantity     | Description                |
| :-------- | :------- | :------------------------- |
| LED Diodes | 28 |  SK6812 MINI-E |
| Base Plate | 1 | STEP file in 3DPrint folder |
| M2 Standoff | 6 | M2x8mm |
| M2 Screws | 12 | M2x6mm |

##Build Guide

1. Solder the Pro Micro controller to the PCB on the top side, with components facing up
2. Solder the diodes onto the top side of the board, observe orientation.
  - Left side (Black line down), Middle (Black line up), Right (Black line down)
  - Snip off the excess legs from the diodes from the underside once all soldered
3. If using LED's you'll need to place these on the rear side of the PCB, observe the triangle marking on the PCB, this corrosponds to the one leg with an edge cut into it.
  - The LED's are orientated differently on the lowest row due to rotated switches.
4. Insert all switches into the PCB, turn over and solder each switch.
  - Ensure that the switch is seated into the PCB fully before soldering.
5. Place keycaps on top
6. Install desired firmware by putting the controller into BOOT mode.
