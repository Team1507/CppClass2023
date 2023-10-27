//Assignment 4:  Functions
// Area done as an example
#include <iostream>

using namespace std;


//Function FindArea
int FindArea(int x, int y)
{
    return x*y;
}

//Function FindVolume
int FindVolume( int q, int r, int s)
{
    return q * r * s;
}

//Function FindMaxInt
int FindMaxInt(int a, int b, int c)
{
//    //Trent's solution:
//    int maxnum = a;
//    if( b>maxnum)
//    {
//        maxnum = b;
//    }
//    if( c>maxnum)
//    {
//        maxnum = c;
//    }
//    return maxnum;


    //Nested if solution
    if ( a > b )
    {
        //a>b
        if( a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        //b>a
        if( b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

//Function FindMinInt
int FindMaxInt(int a, int b, int c)
{
//    //Trent's solution:
//    int minnum = a;
//    if( b<minnum)
//    {
//        minnum = b;
//    }
//    if( c<minnum)
//    {
//        minnum = c;
//    }
//    return minnum;

    //Nested if solution
    if ( a < b )
    {
        //a<b
        if( a < c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        //b<a
        if( b < c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}



//Function FindPower (use for loop)
//Reminder:  x^0 = 1


// -- MAIN --
int main()
{
    int volume;

    cout << "Hello world!" << endl;

    //Find area and output
    int area = FindArea(3,4);

    //Find volume and output
    volume = FindVolume(3,4,5);


    //Find Max numbers
    int max1 = FindMaxInt(2,3,4);
    int max2 = FindMaxInt(10,6,9);
    int max3 = FindMaxInt(-2,-1,-4);



    //Find Min Numbers
    int min1 = FindMinInt(7,2,4);
    int min2 = FindMinInt(-1,0,1);
    int min3 = FindMinInt(7,6,5);

    //Find Powers
    //FindPower(2,3);
    //FindPower(3,2);
    //FindPower(4,0);

    //Output Area
     cout << "Area = " << area << endl;

    //Output Volume
     cout << "Volume = " << volume << endl;

    //Output sum of Max numbers
     cout << "Sum of Max = " << max1 + max2 + max3 << endl;


    //Output sum of Min numbers
     cout << "Sum of Min = " << min1 + min2 + min3 << endl;

    //Output sum of powers

    return 0;
}
