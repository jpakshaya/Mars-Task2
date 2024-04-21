# Mars-Task2
# Thought process
After doing every project on tinkercad, this was my first time having a practical experience. We do all the connections and then write the code on tinkercad, but here i wrote my code and then checked with every component if the code is working properly and if the compoenent is damaged or not. We need to make sure all the connections are tight. If the connections are correct but still the motor does'nt move then then try connecting the battery directly to the driver without the converter.
this project makes the motor move:
>100cm - 150PWM anticlockwise
75cm to 100cm- 75PWM anticlockwise
50cm to 75cm - Stop
25cm to 50cm - 75PWM clockwise
<25cm - 150PWM clockwise
Applications of this project:
can be used in conveyor belt to change the direction of movement.One of the motor can have the sensor, when the luggage is kept on the egde the conveyor belt will start moving in one direction and if the luggage is on other side after a particular distance, it will move the other side.
# Steps 
I connected the driver MD10C pins to arduino, dir pin to 10 ,pwm to 11 and gnd to gnd of arduino board.
Connect the A and B terminal to the motor
Connect the positive and negative termial of the driver to the battery
Execute the code for motor and check if the code is correct
Now remove all the connections and connect the ultrasonic sensor to arduino
Connect the triger pin to 8 and echo pin to 9 to the arduino
connect vcc and gnd to 5v and gnd on arduino respectively
Execute the code for ultrasonic sensor and check the readings on serial monitor
Now that both the components are working properly, let's connect everything together
Repeat the motor connections which were removed
Check if all the connections are correct and tight
Excecute the program and check the output
# Resources
https://forum.arduino.cc/t/cytron-md10c-not-running-12v-dc-motor-when-connected-to-arduino-uno/101056
https://forum.arduino.cc/t/is-direction-a-keyword/155956/5
https://github.com/CytronTechnologies/Arduino_MD10C/blame/master/README.md
https://circuitdigest.com/microcontroller-projects/dc-motor-control-with-arduino-uno-pwm
https://howtomechatronics.com/tutorials/arduino/arduino-dc-motor-control-tutorial-l298n-pwm-h-bridge/
