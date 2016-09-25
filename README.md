 Objective:
 The goal of this program is to create a number guessing game that will be played between
 1.) human and 2.) the program. The human will be the one that will be providing us with the
 number to guess. The program will then try to guess number via binary search.

 The range of the number will be between 1 to 100. We implemented the use of binary search for
 this program so it will make its guess in the midpoint of the given range everytime it makes
 a guess. The goal of this is to slowly reduce the range of that it should focused on. The
 human will need to respond by telling the user 'h' (higher), 'l' (lower), or 'c' (correct). 

 So, if the number is 3. The computer will guess 50 on the first try (range 1 to 100). Human will
 input 'l'. The range now has been reduced to 1 to 49 (since 50 was not correct). Midpoint of 
 1 to 49 is 24, which also is not the right answer. So, the new range is 1-23 and the midpoint
 is 12. Then it goes to 5. And when it reaches 2, the human will indicate that its higher. So
 the only numbers left are 3 and 4. 

Logistics of the program: 
This program can be written entirely in the main function however, a number of functions will 
be written with the goal of making the overall program look at DRY as possible.  

Within the playOneGame() function, there will be a getUserResponseToGuess function that will 
ask the user if the number guess needs to be higher ('h'), lower ('l'), or if it's correct 
('c').

The getMidpoint() fuction will take in two numbers (specifically the range that is known) and
return the midpoint between those two numbers. It will take the lower number if the range is
a double (so 3.5 will be 3). 