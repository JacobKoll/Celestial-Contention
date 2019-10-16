#pragma once

class HelloWorld
{
public:
    HelloWorld(int year, int month, int day);

    void setDate(int year, int month, int day);

    int getYear();
    int getMonth();
    int getDay();

private:
    int yearVal;
    int monthVal;
    int dayVal;
};
