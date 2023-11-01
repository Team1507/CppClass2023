#include "Bank.h"
#include <iostream>

Bank::Bank(  std::string name, int openingAmt )
{
    m_name    = name;
    m_balance = openingAmt;
}

void Bank::Deposit( int amount )
{
    m_balance = m_balance + amount;      //or m_balance += amount;
}
void Bank::Withdrawl( int amount )
{
    if( amount > m_balance)
    {
        std::cout << "You are poor!!!!" << std::endl;
    }
    else
    {
        m_balance = m_balance - amount;
    }

}
int  Bank::GetBalance( void )
{
    return m_balance;
}


