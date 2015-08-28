SippDesignerTut0

THIS IS A SIMPLIFIED IMAGE PROCESSING PIPLEINE. 
IT IS SUPPLIED FOR DEMONSTRATION PURPOSES ONLY.


Supported Platform
===================
Myriad2 - This example works on Myriad2 simulator and MV0182 board. 
PC and Linux - This example works on Linux gcc

Overview
==========
This is a simple SIPP pipeline example built with the SIPP Designer, that takes a raw image from the input and directs it to the output.
The input and output images buffer are located in DDR.

Hardware needed
==================
MV0182 development board

Build
==================
Change directory to the required build platform.

Myriad2 hardware or Simulator: "make clean all"
PC linux (or cygwin): Run "make clean all"

Setup
==================
Myriad2 - Simulator
    - open terminal and type "make start_simulator"
    - open another terminal and type "make run"

MV0182 (Myriad2 hardware)
    - open terminal and type "make start_server"
    - open another terminal and type "make run"
	
PC (Linux, cygwin)
     - Run the executable

Expected output
==================
Exactly the same image as the input, is dumped to a file, 
View with Irfanview or pyuv; The resolution is 512x512, YUV, P400
See http://timi30/svn/TRUNK/mdk/testApps/components/sipptests/progressiveTuts/pics for sample images