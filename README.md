# Moving_Robot's_Hands

Here is an Arduino code to move a robot's arms. The robot is designed by **Smart Methods Est**, under the name the Reception Robot. Three pairs of servo motors are used to move the arms.

## Repository Content 
* an Arduino code of the arms' initial position, in addition to three movements.
* a Picture of the robot.

## Movements
![Reception Robot](https://github.com/AbdullahAlshambri/MovingRobotHands/blob/main/Pictures/Reception%20Robot.jpeg?raw=true)

As illustrated each robot arm consists of three parts:

1- a shoulder to rotate the whole arm.

2- a forearm to provide a lateral movement.

3- a hand.


 
#### Initial Position  
Each servo has a range of motion of 180 degrees, thus each one of them should be implemented at a certain degree according to its function and the mechanical design of the robot. The shoulder servo must be positioned at 90 degrees in the middle to give the arm the ability to rotate 90 degrees CW(0) and 90 degrees CCW(180). Similarly, the forearm servo needs to be at 0 degrees when the forearm is in a straight line with the shoulder. Finally, the hand's servo also needs to be at zero degrees when it is straightly aligned with the forearm and the shoulder. A very crucial point, that is considered in the code, is that the maximum range of movement for the forearm and the hand joints is 90 degrees.

#### Ordinary Position 
To give the robot an ordinary expression, before it performs any movement the shoulders will be at 90 degrees, the forearms and the hands will be at 45 degrees.

### Special Movements
* Come Here: the robot hands move from "the ordinary" position to 90 degrees angle and back to get the customers' attention. 
* Hands down: the robot's arms both go down when a customer is in front of the robot.
* Goodbye: one arm goes up while the hand waves laterally at the customer. 
