#ifndef BANK_H
#define BANK_H

#include <string>

class Bank
{
    public:
        Bank( std::string name, int openingAmt );  //constructor

        void Deposit( int amount );
        void Withdrawl( int amount );
        int  GetBalance( void );


    private:

        std::string m_name;
        int         m_balance;

};

#endif // BANK_H
