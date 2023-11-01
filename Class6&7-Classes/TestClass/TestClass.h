#ifndef TESTCLASS_H
#define TESTCLASS_H

#include <string>



class TestClass
{
    public:
        TestClass(std::string name,  int number );


        //"Function Prototypes"
        void SetNum(int num);
        int  GetNum(void);



    private:

        std::string m_name;

        int m_number;

};

#endif // TESTCLASS_H
