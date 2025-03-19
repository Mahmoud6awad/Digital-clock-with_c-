#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    cout << "enter the hours    :  ";
    cin >> hours;
    cout << "enter the minutes  :  ";
    cin >> minutes;
    cout << "enter the seconds  :  ";
    cin >> seconds;
    while (true)
    {
        system("cls");
        if (seconds > 59)
        {
            minutes++;
            seconds = 0;
        }
        if (minutes > 59)
        {
            hours++;
            minutes = 0;
        }
        if (hours > 23)
        {
            hours = 0;
        }
        cout << hours << " : " << minutes << " : " << seconds;
        seconds++;
        Sleep(1000);
        }
}