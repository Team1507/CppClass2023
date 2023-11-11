#include "Time.h"

#include <iostream>

Time::Time(void)
{
    //constructor
    m_hour   = 0;
    m_sec    = 0;
    m_minute = 0;

    std::cout << "In Constructor" << std::endl;

}

void Time::SetTime(int hour, int minute, int second )
{
    m_hour   = hour;
    m_minute = minute;
    m_sec    = second;
}


void Time::PrintTime()
{
    std::cout << "The time is "<< m_hour <<":"<<m_minute<<":"<<m_sec << std::endl;

}





