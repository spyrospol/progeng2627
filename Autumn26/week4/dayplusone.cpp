#include <iostream>

bool leap_year(int year)
{
    bool ly;

    // TODO: check whether the year is a leap year or not
    // store result in variable ly
    if (year % 4 == 0 && year % 100 != 0)
    {
        ly = true;
    }

    else if (year % 400 == 0)
    {
        ly = true;
    }

    else
    {
        ly = false;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int &d2, int &m2, int &y2)
{
    // TODO: d1, m1, y1 are inputs
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task
    int last;
    if (m1 == 2)
    {
        if (leap_year(y1))
            last = 29;
        else
            last = 28;
    }
    else if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11)
    {
        last = 30;
    }
    else
    {
        last = 31;
    }

    // step 2: is it the last day of the month?
    if (d1 < last)
    {
        d2 = d1 + 1;
        m2 = m1;
        y2 = y1;
    }
    else
    {
        d2 = 1;
        if (m1 < 12)
        {
            m2 = m1 + 1;
            y2 = y1;
        }
        else
        {
            m2 = 1;
            y2 = y1 + 1;
        }
    }
}

int main()
{
    // TODO: write a main to test the function
    int d, m, y, d2, m2, y2;
    std::cout << "enter a date (day month year):" << std::endl;
    std::cin >> d >> m >> y;

    next_date(d, m, y, d2, m2, y2);

    std::cout << "the next day is " << d2 << "/" << m2 << "/" << y2 << std::endl;
}