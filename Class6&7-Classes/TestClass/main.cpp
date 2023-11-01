#include <iostream>
#include "TestClass.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;


    TestClass a("A",10);
    TestClass b("B",10);


    cout<< a.GetNum() << endl;
    a.SetNum(20);
    cout<< a.GetNum() << endl;

    cout<< b.GetNum() << endl;

    return 0;
}
