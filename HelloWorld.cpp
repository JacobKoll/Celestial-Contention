#include "HelloWorld.h"

HelloWorld::HelloWorld(int year, int month, int day)
{
    setDate(year, month, day);
}

void HelloWorld::setDate(int year, int month, int day)
{
    yearVal = year;
    monthVal = month;
    dayVal = day;
}

int HelloWorld::getYear()
{
    return yearVal;
}

int HelloWorld::getMonth()
{
    return monthVal;
}

int HelloWorld::getDay()
{
    return dayVal;
}
