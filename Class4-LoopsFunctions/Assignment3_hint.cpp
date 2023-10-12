#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define MIN_GUESS 0
#define MAX_GUESS 100


int GetGuess(void)
{
    bool user_input_valid = false;    //init bool to false so loop runs
    int  user_input;

    //Loop until input is valid
    while ( !user_input_valid )
    {
        //Ask user for guess
        cout << "Guess: ";
        cin >> user_input;

        //Check for valid input
        if( user_input < MIN_GUESS  || user_input > MAX_GUESS )
        {
            //Invalid Guess, inform user to guess again
            
        }
        else
        {
            //Looks like a valid guess, set valid true to exit while loop

        }
    }

    //return value
    return user_input;
}


int main()
{
    //Variables we are going to need
    int guess     = -1;    //Init guess to an invalid guess so loop runs
    int num_tries = 0;

    //Generate Random Number
    srand(time(NULL));
    int random_number = rand() % 100;

    //Loop until user guess correctly
    while ( guess != random_number )
    {
        //Get Guess by calling function and storing result
        guess = GetGuess();

        //Check if guess to too low


        //Check if guess tis too high


        //Check if guess is correct

        //Increment num_tries

    }


    //Display number of tries


    return 0;
}
