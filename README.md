![Image of Project](giphy.gif)

# Hello!
Hi, this is my project github directory for my physical and tangible hci class. To view more about this project please visit: https://jaedwin.github.io/HCI/dnd.html

# Description
de Ende is a wearable headset that interacts with the environment around the user. It's inspiriation strives from the comfort of listening to music and isolating noises around you. Some soothing music (such as lo fi hip hop) provides a sense of coziness and comfort, a feeling of content. The danish word for that is hygge and is the inspiration for this project. I wanted to take something I used in an everyday situation and convert it to become something that could take input and provide output based on certain conditions.

de Ende uses a ultrasonic distance sensor to determine if someone is to the left or right of you (sorry it can't detect behind-the-back lurkers) and will respond based on if anyone is within 30cm of a sensor. If someone is within 30cm the headphones will automatically play a soothing pre-determined lo-fi tune and the headphones will turn red, a sign will also pop out saying "DND" or "Do Not Disturb". Likewise if no one is within 30cm then the music will stop and the headphones will turn green.

# Instructions
+ The music file `purrple-cat-flourish` was too big, the original version can be found here: https://www.free-stock-music.com/purrple-cat-flourish.html
+ On Windows, open cmd and cd into the source directory, then run: `python listen.py`
+ If you run into issues with listen.py, edit it and change `CAT4` to the correct port you're using

# Sources
+ https://howtomechatronics.com/tutorials/arduino/ultrasonic-sensor-hc-sr04/
+ https://www.electronics-lab.com/project/using-sg90-servo-motor-arduino/
+ https://www.thingiverse.com/thing:1377355/files
+ https://www.thingiverse.com/thing:938918/files
+ https://stackoverflow.com/questions/49566331/pyserial-how-to-continuously-read-and-parse
+ https://www.free-stock-music.com/purrple-cat-flourish.html
+ https://stackoverflow.com/questions/43758189/how-to-stop-a-sound-that-is-playing-in-python
+ https://homebrewheadphones.com/build/
