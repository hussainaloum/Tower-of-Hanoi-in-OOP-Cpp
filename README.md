# Tower of Hanoi
A mathematical game developed in Object Oriented C++

## Game description
Tower of Hanoi is a mathematical game or puzzle consisting of three rods and a number of disks of various diameters, which can slide onto any rod. The puzzle begins with the disks stacked on one rod in order of decreasing size, the smallest at the top, thus approximating a conical shape. The objective of the puzzle is to move the entire stack to the last rod, obeying the following rules:

1- Only one disk may be moved at a time.  
2- Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack or on an empty rod.  
3- No disk may be placed on top of a disk that is smaller than it.  

![1_4fIwfKZCHzKGgPanAeWUnA](https://user-images.githubusercontent.com/36559536/153303587-4f897ccf-f222-4f35-b0c3-8c033d0e5fb3.gif)


## How the code operates
The code is devided into classes. A class for cubes,a class for stacks(a stack of cubes), a class for the game (containting 3 stacks) and an HSLAPixel class used for coloring the cubes.
When you build the code using `make all` and then run the game with `./main`. All the cubes start on the left rod according to the rules of the game and the game is solved automatically for you, showing each move in the terminal.  

Screenshot below shows part of the steps leading to the final output.

<img width="647" alt="Screen Shot 2022-02-09 at 4 56 41 PM" src="https://user-images.githubusercontent.com/36559536/153304746-06043df8-6a8f-4df4-bf06-c5eac8b60a7c.png">
