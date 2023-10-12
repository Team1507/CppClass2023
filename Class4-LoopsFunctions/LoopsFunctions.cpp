#include <iostream>

using namespace std;

void PrintHello(void)
{
    cout<<"Hello!!!!!!!!!"<<endl;
}

void PrintInteger( int a )
{
      cout<<a<<endl;
      return;
}

int AddTwoNumbers( int a, int b)
{
   return a + b;
}


int main()
{
    //cout << "Hello world!" << endl;

    PrintHello();

    PrintInteger(1);
    PrintInteger(45);
    PrintInteger(23);
    PrintInteger(89);

    cout<< "Sum= " << AddTwoNumbers(4,7)<<endl;



    int i=0;

    while ( i<=10 )
    {
        cout << i << endl;
        i++;
    }


    bool loop_enable = true;

    while( loop_enable )
    {
        cout << i << endl;
        i++;

        if( i >=20 )
        {
            loop_enable = false;
        }
    }


    for( i=1;  i<14; i++)
    {
        cout << i << endl;
    }


    return 0;
}
