#include<iostream>                          
using namespace std;

//Prototype else the functions wont run 
void playOneGame(); 
void getUserResponseToGuess(int, char&); 
int getMidpoint(int, int);

//This is the main function for the program
int main() {
    char response;
    
    cout << "Ready to play (y/n)? ";
    cin >> response;
    while (response == 'y') {
        //updated playOneGame with the firstlow and firstHigh
        playOneGame();
        cout << "Great! Do you want to play again (y/n)? ";
        cin >> response;
    }
}


//The playOneGame() function should be implemented until the number has been correctly guessed. 
//use pass by reference with "&" so that the numbers can be used throughout the
//program. 
void playOneGame(){
    int firstlow;
    int firsthigh;
    char result;

    //This is the range for the program (1 to 100)
    firstlow = 1;
    firsthigh = 100;

    //This is an additional step that I created in case the user wants to change the 
    //range of the game. If they do, then we need to comment out the numbers that are 
    //pass in for firstlow and firsthigh. And put the following codes back to the program
    // cout<<"Please enter a range for your game. The low will be (example 1): "<<endl;
    // cin>>firstlow;
    // cout<<"Please enter a range for your game. The high will be (example 100): "<<endl;
    // cin>>firsthigh;

    int guess;
    while (result != 'c'){
        guess = getMidpoint(firstlow,firsthigh);

        getUserResponseToGuess(guess, result);
        // h, l, c
        if (result == 'h'){
            //goal of reducing our range. Since we know that number we guess is not
            //right, we exluded that by having +1
            firstlow = guess + 1;
        }else if (result == 'l'){
            //goal of reducing our range. Since we know that number we guess is not
            //right, we exluded that by having -1
            firsthigh = guess - 1; 
        }else{
            // this means its 'c'
        } 
    }
}

//The getUserResponseToGuess() function should prompt the user with the phrase 
//"is it <guess> (h/l/c)? " with the value replacing the token <guess>. It should 
//set its "result" parameter equal to either 'h', 'l', or 'c'. It should do this 
//ONE time, and should not do anything else.

// This function will takes guess and result of type int,
// and char being a pass by refrerence and guess is a pass by value
void getUserResponseToGuess(int guess, char& result){
    cout<<"Is the number: "<<guess<<"(h/l/c)"<<endl;
    cin>>result;
}

//Goal of finding the midpoint number with the given min (low) and max (high)
//As new numbers are inputted (via low and high), new midpoint number will be 
//calculated until the user acknowledge that the midpoint number is right. 
int getMidpoint(int low, int high){
    int returnmidpoint = (low + high) / 2;
    return returnmidpoint;
}