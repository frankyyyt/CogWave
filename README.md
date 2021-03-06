CogWave
=======

CogWave: Open-source Software Framework for Cognitive Radio Waveform Design


CogWave is an open-source software framework aiming at developing cognitive radio (CR) waveforms.
Multiple waveforms have been implemented in CogWave, such as the multichannel DAA-OFDM waveform, the DADS waveform, and GNU Radio waveforms. CogWave provides the means to implement different CR waveforms and to develop rules to switch between different CR waveforms during run-time according to the user needs and the electromagnetic environment. With this code the CR nodes switch from the DADS to the multichannel DAA-OFDM waveforms automatically while maintaining communication when the throughput drops under a predefined threshold.

For more information, visit our website http://www.sic.rma.ac.be/~vlenir/CogWave

To download the code, go to GitHub https://github.com/vlenircissrma/CogWave

To see CogWave in action, follow this link http://www.youtube.com/watch?v=mETzIbV3Edg


To get help and to report bugs, post your message to the google group https://groups.google.com/forum/#!forum/cogwave or send an email to the diffusion list cogwave@googlegroups.com


![Setup Screenshot](https://raw.github.com/vlenircissrma/CogWave/master/Screenshots/setup.jpg)
![Features Screenshot](https://raw.github.com/vlenircissrma/CogWave/master/Screenshots/features.jpg)
![Applications Screenshot](https://raw.github.com/vlenircissrma/CogWave/master/Screenshots/applications.jpg)


INSTALLATION (Ubuntu 14.04 LTS)
===============================

1) IT++

sudo apt-get install libitpp-dev libblas-dev liblapack-dev libfftw3-dev

2) Qtcreator

sudo apt-get install qtcreator

3) Qwt

sudo apt-get install libqwt5-qt4-dev

4) Gstreamer

sudo apt-get install libgstreamer-plugins-base0.10-dev libgstreamer0.10-dev gstreamer0.10-plugins-ugly

5) UHD

http://code.ettus.com/redmine/ettus/projects/uhd/wiki/UHD_Linux

6) Gnu Radio 3.6.5

http://gnuradio.org/releases/gnuradio/gnuradio-3.6.5.tar.gz

7) Open CogWave.pro in QtCreator and launch the Application !



