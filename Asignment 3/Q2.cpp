#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    Time()
    {
        this->h = 00;
        this->m = 00;
        this->s = 00;
    }

    Time(int h, int m, int s)
    {
        this->h = 00;
        this->m = 00;
        this->s = 00;
        cout << "hello.." << endl;
    }

    int getHour()
    {
        return this->h;
    }
    int getMinute()
    {
        return this->m;
    }
    int getSecond()
    {
        return this->s;
    }

    void setHour(int h) { this->h = h; }
    void setMinute(int m) { this->m = m; }
    void setSecond(int s) { this->s = s; }
};

void acceptTime(Time &ref)
{
    int hr, min, sec;

    cout << "enter hr" << endl;
    cin >> hr;

    cout << "enter min" << endl;
    cin >> min;

    cout << "enter sec" << endl;
    cin >> sec;

    ref.setHour(hr);
    ref.setMinute(min);
    ref.setSecond(sec);
}

void DisplayTimings(int i, Time &ref)
{
    cout << "Time T" << ++i << "is - " << ref.getHour() << "min" << ref.getSecond() << "sec" << endl;
}
int main()
{
    Time *tptr = new Time[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Time" << i + 1 << endl;
        cout << "" << endl;

        acceptTime(tptr[i]);

        for (int i = 0; i < 3; i++)
        {
            DisplayTimings(i, tptr[i]);
        }
    }
    return 0;
}