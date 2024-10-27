#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int mins;
    int sec;

public:
    Time() : hours(0), mins(0), sec(0) {}
    Time(int h, int m, int s) : hours(h), mins(m), sec(s) {}

    const Time operator+(Time &t)
    {
        return Time(hours + t.hours, mins + t.mins, sec + t.sec);
    }

    const Time operator-(Time &t)
    {
        return Time(abs(hours - t.hours), abs(mins - t.mins), abs(sec + t.sec));
    }

    void accept_time()
    {
        cout << "Enter Time: HH MM SS : ";
        cin >> hours >> mins >> sec;
    }

    void display_time()
    {
        cout << "Current Time is: " << hours << " : " << mins << " : " << sec << endl;
    }

    friend ostream &operator<<(ostream &os, const Time &t);
    friend istream &operator>>(istream &is, Time &t);
};

ostream &operator<<(ostream &os, const Time &t)
{
    return os << "Current Time is: " << t.hours << " : " << t.mins << " : " << t.sec << endl;
}

istream &operator>>(istream &is, Time &t)
{
    cout << "Enter Time: HH MM SS : ";
    return is >> t.hours >> t.mins >> t.sec;
}

int main()
{
    Time t1, t2(10, 10, 10), t3;
    cin >> t1;
    cout << t1;

    t3 = t1 + t2;
    cout << t3;

    return 0;
}