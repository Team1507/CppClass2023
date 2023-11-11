#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Time breakfast;
    Time lunch;
    Time dinner;

    breakfast.SetTime(7,30,00);
    lunch.SetTime(12,30,00);
    dinner.SetTime(5,00,02);

    breakfast.PrintTime();
    lunch.PrintTime();
    dinner.PrintTime();

    return 0;

}
