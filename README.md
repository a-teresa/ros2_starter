<h1>ROS2 Project </h1>

<h3>Main Goals</h3>

<p>Although in a very initial stage, this project aims to combine ros2 with computer vision, in order to perform object detection. It will be used both a raspberrypi 4 model B with the coral TPU Coprocessor and a Jetson Nano (Jetson-IO-BASE-A with Jetson Xavier NX - 16 GB eMMC 5.1), and results in performance (using the same model) will be compared.</p>

<h3>Present work stage</h3>

<p>This repository contains only the source directory which is contained in the ros2 workspace. </p>
<p>A ros 2 environment was setup in a virtual machine, nodes have been created in both python and c++, and node communication has been explored. In the following image, we can see a publisher node and a subscriber node:
</p>
<ul>1 - on the top left console: the publisher starts; </ul>
<ul> 2 - on the right top console, we can see the result of the topic, by running: ros topic echo /robot_news</ul>
<ul>3 - on the bottom console, we can see the subscriber result, printing the topic emitted by the publisher; if the publisher stops, the subscriber is independent, the spin continues, but no longer will be printing the topic. As soon as the publisher starts again, the topic will be printed by the subscriber. </ul>

<img src="https://github.com/a-teresa/ros2_starter/blob/main/node_communication_example.png"></img>

<h3>Future work:</h3>
<ul>A - Continue to explore communications between nodes (client/server communication between nodes)</ul>
<ul> B - include ROS simulation (gazebo) and URFD (unified robot description format)</ul>
<ul> C - object detection using deep learning project</ul>
<ul>D - Real-time vision depth perception on both jetson nano island raspberrypi, integrating real-time feed</ul>


<h5>References:</h5>

<ul>Ros2 for Beginners, Edouard Renard (Manning Publication)</ul>
<ul>Self-Driving Car Specialization Course, Ritesh Kanjee (Augmented AI) </ul>
<ul>Mastering ROS for Robotics Programming, third edition, Lentin Joseph & Jonathan Cacace (Packt)</ul>
<ul>Effective Robotics programming with ROS, third edition, Anil Mahtani et al. (Packt) </ul>
<ul>Hands on ROS for robotics Programming (case study2 - ROS GUI development tools - th PI camera), Bernardo Ronquillo Japón (Packt)</ul>
<ul>ROS Robotics By Example, Carol Fairchild et al. (Packt)</ul>

