#include <iostream>

#include "Time.h"               //Must include header file for class Time

using namespace std;

int main()
{
    cout << "Hello world!" << endl; 

    Time time1;                 //Create object 'time1' of type Time

    time1.SetTime( 1,2,3 );     //Call member function SetTime

    time1.PrintTime();          //Call member function PrintTime
    

    return 0;
}

//Extra Credit:  Add another member function to add time (h,m,s)

//Extra Extra Credit:  Handle minute/seconds rollovers


