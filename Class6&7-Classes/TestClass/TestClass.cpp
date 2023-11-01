#include "TestClass.h"
#include <iostream>


//Constructor
TestClass::TestClass(std::string name,  int number)
{
    std::cout << "In TestClass Constructor -> " << name << std::endl;

    m_name   = name;
    m_number = number;

    std::cout << m_name << std::endl;
}



void TestClass::SetNum(int num)
{
    m_number = num;
}
int  TestClass::GetNum(void)
{
    return m_number;
}
