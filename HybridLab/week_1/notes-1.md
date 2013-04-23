These notes are available as a public google doc at https://docs.google.com/document/d/1ii4u8RAb5UQh-DpkWjBLFKEh2kSMV059eOO6FLoet_k/edit?usp=sharing

# Arduino and Max/MSP
## Introduction

### Inspiration
#### The Resistor JelTone
http://www.flickr.com/photos/ranjit/5879592536/
http://openmaterials.org/2011/09/01/the-resistor-jeltone-an-edible-toy-piano/
Sterling silver pins are embedded in each piece of fruit. Another pin is embedded in the body of the piano. Jello is conductive. So, when you touch both a key and the body of the piano, you complete a circuit, which the Arduino can measure. The Arduino sends that data to Max, which plays a sound.
#### Manifest Yesterday
http://cycling74.com/project/manifest-yesterday/
Deceptively simple. Some kind of sensor (probably a potentiometer) measures the rotation of the blind-opener. Arduino sends that data to Max, which uses it to synthesize light and sound.
#### Super Angry Birds – a DIY Tangible Controller
http://cycling74.com/project/super-angry-birds-a-diy-tangible-controller/
A tangible controller for Angry Birds. Data from the motorized slider and TNT box is sent to Arduino, which sends the data to Max, where it gets analyzed. Max sends the appropriate data to the Angry Birds app–just like that you have a tangible controller.
#### Variations II
http://cycling74.com/project/variations-ii-of-variations-iimapping-in-motion/
Another simple but really elegant piece. Here, an Arduino controls an array of rotating panels. As they rotate, the Arduino sends the angle of each motor to Max, which can then generate the appropriate projection mapping. The result is this very pretty array of rotating panels that seem to be both physical and virtual at the same time.
#### LightEfface
http://vimeo.com/59142013
Really nice because it's very easy to understand how it works. Each of several photoresistors is wired to an Arduino. The Arduino sends a measurement of how much light is falling on each sensor to Max, which uses that data to synthesize sound. In the first mode, that sound is simply a MIDI trigger. In the second mode, the data coming from the sensors is used to control the amplitude of several sound partials. More light on a given sensor translates into more amplitude for a particular oscillator. I think this project has interesting possibilities for further exploration–maybe a piece where the timbre of a certain sound depends on the time of day, or the way light propagates through some dynamic space.
#### Tele-present Water
http://arduino.cc/blog/2011/07/06/tele-present-water-waves-from-faraway/
Tele-Present Water pulls data in real time from data buoy station #46075 in the Shumagin Islands, Alaska, and uses that data to drive a bunch of motors at a museum in Wroclaw, Poland. Max translates the data from the buoy into control data specific to each motor–Arduino uses that data to actually drive each motor.
#### Arduinoboy
http://txton.net/hoehoe/2010/100511030849.html
https://www.youtube.com/watch?v=QCOts5U0Og8
Using an Arduino to control the DSP of an oldschool GameBoy. Max plays the backing tracks and stores the actual sequences to be played, and Arduino handles talking to the actual hardware.
#### DRM chair
http://www.creativeapplications.net/objects/drm-chair-chair-that-self-destructs-after-8-uses/
Max is actually not used in this one at all (only Arduino). But it's awesome.
#### Beatoven
http://www.creativeapplications.net/arduino-2/beatoven-mixing-sounds-as-if-they-were-cooking-ingredients/
Actually uses Pure Data, not Max/MSP, but they are very similar programs so the same principles apply. I can't see anyone actually using it to make music, but I think the idea of using the lid to control the lowpass filter is very, very cute.
#### Hyperinstuments
https://www.youtube.com/watch?v=sWWwYexy9So
Refer to any in a wide range of instuments augmented with sensors. These can include pressure sensors, stretch sensors, gyroscopes and accelerometers, or whatever else suits your fancy.
#### All Hail the Dawn
http://vimeo.com/album/1612430/video/31059675
http://computermusicblog.com/blog/2011/08/19/all-hail-the-dawn-by-alexander-dupuis/
Two light sensors in a crazy little box control a glitchy, angry cloud of light and sound. Watch out.
### The blink program
### Max objects for serial communication
### Setting an LED on Arduino from Max
### Reading values from the Arduino into Max