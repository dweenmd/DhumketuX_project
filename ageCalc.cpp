
#include <bits/stdc++.h>
#include<ctime>
using namespace std;
bool isLeapYear(int year);
int check_date(int month, int year);


int main()
{

    int bd, bm, by;
    int cd,cm, cy;

    cout << "Enter your birth date (day-month-year): ";
    cin >> bd >> bm >> by;


    cout << "Enter the current date (day-month-year): ";
    cin >> cd >>cm >> cy;

    int ay, am, ad;

    ay = cy - by;
    am =cm - bm;
    ad = cd - bd;

    if (am <= 0)
    {
        ay -= 1;
        am += 12;
    }
    if (ad <= 0)
    {
        am -= 1;
        ad += check_date(bm, by);

    }
    if(ay<0)
    {
        ay=0;
    }

    cout << "Your age is: " << ay << " years, " << am << " months, and " << ad << " days." ;

    return 0;
}
bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int check_date(int month, int year)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        return isLeapYear(year) ? 29 : 28;
    default:
        return -1;
    }
}

