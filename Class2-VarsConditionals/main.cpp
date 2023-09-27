#include <iostream>

using namespace std;

#define THIS_IS_A_CONSTANT          32

const float THIS_IS_ALSO_A_CONSTANT =  0.7;

int x;
int X;


int main()
{
    std::cout << "Hello world!" << std::endl;

    int var1;
    int var2 = 10;

    float x;     //This is a bad name!!!!!
    float thisIsNotReallyAVeryGoodNameForaVariable;  //ALSO BAD!

    float valueA;
    float valueB;
    float calcAnswer;

    valueA = 10.2;
    valueB = valueA + 1.25;

    calcAnswer = valueA + valueB;

    valueA = 64.0;

    cout << valueA << endl;
    cout << valueB << endl;
    cout << calcAnswer << endl;

    ///////////////////////////////////////////////////

    int testA = 1;
    int testB = 2;


    if( testA == 2 )
    {
        cout <<" Was True" << endl;
    }
    else
    {
        cout <<" Was False" << endl;
    }


    if( testA == 2 )
    {
        cout <<" TestA True" << endl;
    }
    else if( testB == 3 )
    {
        cout <<" TestB True" << endl;
    }
    else
    {
        cout <<" False" << endl;
    }

    if( (testA == 1) && (testB == 3) )
    {
        cout<< "Both Were True" << endl;
    }


    return 0;
}
