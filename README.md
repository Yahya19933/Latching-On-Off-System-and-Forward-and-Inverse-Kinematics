# Latching-On-Off-System-and-Forward-and-Inverse-Kinematics
Latching On/Off System button by using relay and Arduino &amp; Forward and inverse kinematics motion for 3 DOF robotic arm

## Latching-On-Off-System
Latching On/Off System button by using relay and Arduino

Designing the system that saves power and reduces power consumption by Latching On/Off System push button. So, When pressing the push button the bulb will light up for 3 seconds and then will automatically off

![Latching On Off System Animation](https://user-images.githubusercontent.com/90250848/187072457-f05a9dd9-4bf8-40f4-b15d-c2930e94a6b7.gif)





## Forward-and-Inverse-Kinematics-for-3-DOF-Robotic-Arm
Forward and inverse kinematics motion for 3 DOF robotic arm


Connected 3 servo motors to Arduino to build a robotic arm and create two functions which are forward kinematics and inverse kinematics

![Forward and Inverse Kinematics Cirtuit](https://user-images.githubusercontent.com/90250848/187071938-d1e534fe-6c60-411d-81d7-28ef60f05a8d.PNG)



### Forward kinematics function
**Forward Kinematics** is to get the co-ordinate(s) of the end effector from given angles of all joints
requires all lengths of links and angles 
The output shows x,y. and Total angle  
by using the below equations and writing them as code in Arduino

![Firest eq forword](https://latex.codecogs.com/gif.latex?X%20%3D%20L_%7B1%7D%20%5Ccos%20%28%5CTheta_%7B1%7D%29%20&plus;%20L_%7B2%7D%20%5Ccos%20%28%5CTheta_%7B1%7D%20&plus;%20%5CTheta_%7B2%7D%29%20&plus;%20L_%7B3%7D%20%5Ccos%20%28%5CTheta_%7B1%7D%20&plus;%20%5CTheta_%7B2%7D%20&plus;%20%5CTheta_%7B3%7D%29)

![Second eq Forword](https://latex.codecogs.com/gif.latex?Y%20%3D%20L_%7B1%7D%20%5Csin%20%28%5CTheta_%7B1%7D%29%20&plus;%20L_%7B2%7D%20%5Csin%28%5CTheta_%7B1%7D%20&plus;%20%5CTheta_%7B2%7D%29%20&plus;%20L_%7B3%7D%20%5Csin%20%28%5CTheta_%7B1%7D%20&plus;%20%5CTheta_%7B2%7D%20&plus;%20%5CTheta_%7B3%7D%29)

![third eq Forword](https://latex.codecogs.com/gif.latex?%5CTheta%20%3D%20%5CTheta_%7B1%7D%20&plus;%20%5CTheta_%7B2%7D%20&plus;%20%5CTheta_%7B3%7D)


![Foroward Kinematics Animation](https://user-images.githubusercontent.com/90250848/187071955-58fe1dcd-54bd-413c-9c8c-be51a3283e82.gif)




### Inverse kinematics function
**Inverse Kinematics** is to get all joints angle from given co-ordinate(s)
requires all lengths of links and x,y, and Total angle 
The output shows all angles  
by using the below equations and writing them as code in Arduino

![First eq inverse](https://latex.codecogs.com/gif.latex?X_%7B2%7D%20%3D%20X%20-%20L_%7B3%7D%20%5Ccos%20%28%5CTheta%29)

![Second eq inverse](https://latex.codecogs.com/gif.latex?Y_%7B2%7D%20%3D%20Y%20-%20L_%7B3%7D%20%5Csin%20%28%5CTheta%29)

![third eq inverse](https://latex.codecogs.com/gif.latex?%5Ccos%28%5CTheta_%7B2%7D%29%20%3D%20%5Cfrac%7B%28X_%7B2%7D%29%5E%7B2%7D%20&plus;%20%28Y_%7B2%7D%29%5E%7B2%7D%20-%20%28L_%7B1%7D%29%5E%7B2%7D%20-%20%28L_%7B2%7D%29%5E%7B2%7D%7D%7B2%20L_%7B1%7DL_%7B2%7D%7D)

![forth eq inverse](https://latex.codecogs.com/gif.latex?%5Ccos%28%5CTheta_%7B1%7D%29%20%3D%20%5Cfrac%7B%28L_%7B1%7D%20&plus;%20L_%7B2%7D%20%5Ccos%20%28%5CTheta%20_%7B2%7D%29%29%20X_%7B2%7D%20&plus;%20L_%7B2%7D%5Csin%20%28%5CTheta%20_%7B2%7D%29Y_%7B2%7D%20%7D%7B%28X_%7B2%7D%29%5E%7B2%7D%20&plus;%20%28Y_%7B2%7D%29%5E%7B2%7D%7D%20_%7B%7D)

![fifth eq inverse](https://latex.codecogs.com/gif.latex?%5CTheta%20_%7B3%7D%20%3D%20%5CTheta%20-%20%5CTheta%20_%7B2%7D%20-%20%5CTheta%20_%7B1%7D)


![Inverse Kinematics Animation](https://user-images.githubusercontent.com/90250848/187071987-4a56afe0-ba31-4f4a-bc6a-55587836fff2.gif)


