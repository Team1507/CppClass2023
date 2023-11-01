#include <iostream>

#include "Bank.h"


using namespace std;

int main()
{
    cout << "Hello Bank!" << endl;



    Bank trent("Trent", 100);
    Bank gavyn("Gavyn", 1000);
    Bank joe("Joe",5);


    gavyn.Deposit(100);
    trent.Withdrawl(25);

    joe.Withdrawl(15);
    joe.Deposit(10000);
    joe.Withdrawl( 1234 );

    gavyn.Withdrawl( 150 );

    cout << "Trent - " << trent.GetBalance() << endl;
    cout << "Gavyn - " << gavyn.GetBalance() << endl;
    cout << "Joe   - " << joe.GetBalance()  << endl;

    return 0;
}
