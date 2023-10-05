#include <iostream>

using namespace std;

#define CONSTANT1  3.14

const float CONSTANT2 = 1.2345;



int main()
{
    cout << "Hello world!" << endl;

    int varA;
    int varB;
    int sumAB;
    float sumOf2Constans = CONSTANT1 + CONSTANT2;



    cout << "The numbers are " << varA << " " << varB <<endl;

    sumAB = varA + varB;

    cout << "The sum is: " << sumAB << endl;
    cout << "The sum is: " << varA + varB << endl;

    //Part 2
    cout << "Summing two constant floats = " << CONSTANT1 + CONSTANT2 << endl;

    //Part 3:

    int varC;

    cout << "Enter a Number ";
    cin >> varC;

    if( (varC % 2) == 1  )
    {
        cout << "It is ODD!" << endl;
    }
    //if( (varC % 2) == 0  )
    else
    {
        cout << "It is EVEN!" << endl;
    }

    //*****************************

    if( varC > 0 )
    {
        cout << "Greater Than" << endl;
    }
    else if( varC < 0 )
    {
        cout << "Less Than" << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }

    //*****************************

    if ( (varC > 10) && (varC%2 ==0) )
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    #define NUM_SECONDS_PER_MIN 60

    cout << "NumSecPerMin " << varC * NUM_SECONDS_PER_MIN << endl;



    return 0;
}
