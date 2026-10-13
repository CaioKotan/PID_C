<h1>PID_C</h1>
<img src="https://www.digikey.com/maker-media/02fe5790-c8c0-4868-9b17-8a72bae8afe0"/>
<p>PID Controller Library in C</p>
<p>A lightweight C library for implementing PID (Proportional–Integral–Derivative) control algorithms in embedded systems and general-purpose applications.</p>
<h2>Overview</h2>
<p>This library provides a simple way to calculate PID control outputs using a reference value (setpoint) and a measured value (process variable).

The PID controller continuously calculates the error between the desired and measured values, generating a control output that helps the system reach and maintain the target value.

It can be used in applications such as:

◆ Motor speed and position control

◆ Temperature regulation

◆ Robotics and automation systems

◆ Embedded systems using microcontrollers

◆ Process control and feedback systems
</p>

<h2>Installation</h2>
<div>
<p>
  Copy the library source and header files into your project:
</p>
<div align="left">
  <h3 align="left">📂project/</h3>
  <p>├────────────────────────────── pid.c</p>
  <p>└────────────────────────────── pid.h</p>
</div>
<h3>Include the header file in your source code:</h3>
<p>#include "pid.h"</p>
<h3>Compile the library together with your application:</h3>
<p>gcc main.c pid.c -o application</p>
</div>

<h2>License</h2>
<p>This project is licensed under the MIT License. See the <a href="LICENSE">LICENSE</a> file for details.</p>
