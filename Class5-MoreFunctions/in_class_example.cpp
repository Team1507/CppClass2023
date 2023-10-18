#include <iostream>

using namespace std;

//function DoAdd
// <xxx> DoAdd( <something else >)
float DoAdd( float a, float b )
{
    return a + b;
}
float DoSub( float a, float b )
{
    return a - b;
}

float DoMath( float a, float b, char op )
{
    if( op == '+')
    {
        return a + b;
    }
    else if( op == '-')
    {
        return a - b;
    }
    else if ( op == '*')
    {
        return a * b;
    }
    else if ( op == '/')
    {
        return a / b;
    }
    else
    {
       cout << "Invalid op code " << endl;
    }

    return 0;
}

int DoFactorial( int num )
{

    int factorial = 1;

    // for (init, compare, operator)
    for(int i=num; i>0; i-- )
    {
       factorial =  factorial * i;

       cout << factorial << "  " << i << endl;

    }


    cout << "Factorial = " << factorial << endl;

    return factorial;
}


int main()
{


    cout << DoFactorial( 3 ) << endl;

//
//    cout << DoAdd( 10.1,  20.3 ) << endl;
//    cout << DoAdd( 3.333, 6.666 ) << endl;
//
//    cout << DoSub( 3.333, 6.666 ) << endl;
//
//    cout << DoMath( 3.333, 6.666, '+' ) << endl;
//    cout << DoMath( 3.333, 6.666, '-' ) << endl;
//    cout << DoMath( 3.333, 6.666, '*' ) << endl;
//    cout << DoMath( 1.0,   0.0, '/' ) << endl;
//    cout << DoMath( 3.333, 6.666, '!' ) << endl;




    return 0;
}
