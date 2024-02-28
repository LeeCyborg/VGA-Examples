# VGA examples using Arduino and VGAX library 

VGAX >  Downlaod the library via Arduino Library Manager https://github.com/smaffer/vgax?tab=readme-ov-file 
Wire your arduino like this, don't worry about resistors. Change pins 1, 2, and 3 for different colors 

![image](https://github.com/LeeCyborg/VGA-Examples/assets/7967032/f6da06e7-2d91-407e-a104-6e3281dd79bd)

See VGAX for how colors work


Play with VGA and Arduino:   

- Plug in your VGA monitor to your computer to see if it works. Make sure the power supply has the correct power rating. If you can use your screen successfully, you’re ready to experiment!   
- Download Arduino (arduino.cc) I like 1.8.16, but any are good!  
- Install the VGAX Library. Sketch > Include Library > Manage Libraries > Search for VGAX   
- ou can view the code here: https://github.com/smaffer/vgax?tab=readme-ov-file     
- Wire up your a VGA breakout cable according to the wiring diagram. Use a flat head screwdriver to secure the wires. Don’t worry about the resistors! The first 3 pins control the color of your screen. Your arduino can only handle 2/3 colours! Keep track of the pin numbers on your board and on the breakout.    
- Plug in your VGA cable to the breakout, and plug your Arduino in. Upload an example code. File > Examples > VGAX > Random 
- Play with the code! See my examples here: https://github.com/LeeCyborg/VGA-Examples/blob/main/VGA_Examples/VGA_Examples.ino   
