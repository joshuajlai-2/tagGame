Joshua Lai
Assignment 1
CMPS146
All base code written by John Funge

Desc:
I modified the game to show only 1 ai character, 1 player character and 1 obstacle.  I spent too much time trying to get the line of sight to work and did not implement a debug 'D' key to show a visualization of the line of sight.  To best show that it works, I have the AI character as 'it' and immobile.  To see that the line of sight works, move the player character behind the obstacle and debug messages will print to the console describing the slope of the character as well as the two slopes from the AI to each edge of the obstacle.  Once the slope of the AI to the PC is between the offset slopes, the character will disappear and no longer be part of the AI's "nearest character" database.