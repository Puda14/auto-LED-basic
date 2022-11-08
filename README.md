<p align="center">
  <img src="https://github.com/Puda14/auto-LED-basic/blob/main/schematics/Schematics.jpg" />
</p>

# auto-LED-basic

A system that determines the light in a room to turn on or off lights. 

- 1 Arduino Nano
- 4 male to female jumper wires
- 2 resistance 1kΩ
- 1 LED
- 1 light sensor
- 1 Circuit board

# Computer setup

- Dowload Arduino IDE on [Arduino IDE](https://www.arduino.cc/en/software)

    ![image](https://user-images.githubusercontent.com/86721208/171421580-ddb0f377-652e-415c-a952-377a8b33848d.png)
- For Arduino IDE with Arduino Nano:
  - Download driver on [Driver](https://resources.stdio.vn/content/article/5ef62159c3c65d69bbced897/resources/res-1597034626-1597034626406.zip) 
  - Select `board Arduino Nano` for `Board` and the corresponding port for `Port` in `Tools` menu.

# Schematics

<p align="center">
  <img src="https://github.com/Puda14/auto-LED-basic/blob/main/schematics/Schematics.png" />
</p>

#The code

- The light sensor will continuously detect the light in the room.
 - If the room is dark, LED will be on
 - If the room is bright, LED will be off.

# Future development direction

