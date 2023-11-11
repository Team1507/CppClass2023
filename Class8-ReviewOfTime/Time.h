#ifndef TIME_H
#define TIME_H


class Time
{
    public:
        Time(void);  //Constructor

        void SetTime(int hour, int minute, int second );
        void PrintTime(void);


    private:

        int m_hour;
        int m_sec;
        int m_minute;
};

#endif // TIME_H
