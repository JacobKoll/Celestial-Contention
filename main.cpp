#include "HelloWorld.h"
#include <iostream>

int main()
{
	HelloWorld date(2019, 10, 16);
    std::cout<<"Year: " << date.getYear() << "\n";
    std::cout<<"Month: " << date.getMonth() << "\n";
    std::cout<<"Day: " << date.getDay() << "\n";
    return 0;
}
