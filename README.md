# ECE387-Remote-Control
Haixu Dong

For this activity I aimed to use two arduino uno boards to achieve remote control. 

The circuit construction is in image file "remote control.jpg"

The above board has one push button and one IR led emitter. 

The code for above borad is "emit.ino" and this code is referenced from: https://www.cnblogs.com/hgxh/p/4109012.html

The below borad has one led and one IR receiver. 

The code for below borad is "receive.ino" and this code is referenced from: https://www.cnblogs.com/hgxh/p/4109012.html

The library used in both code (IRremote.h) can be download from: https://github.com/z3t0/Arduino-IRremote. 

It is an zip file and should be unzip to arduino library file.

Unfortunately my circuit didn't work well. I checked the codes they were successfully upload into two arduino board in different COM. 

The reason that this circuit did not work was I didn't set the IR led emitter right. I highlight this error in the image with red circle.

The component I used was actually another type of receiver not emitter. And I couldn't find an IR led emitter during spring break.
