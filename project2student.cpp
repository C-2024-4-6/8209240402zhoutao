#include <iostream>
#include "project2.h"

Student::Student()  
{
    num = 0;
    name[0] = '\0';
    sex = '\0';
}

Student::Student(int n, const char* nam, char s)  
{
    num = n;
    int i = 0;
    while (nam[i] != '\0' && i < 19) {
        name[i] = nam[i];
        i++;
    }
    name[i] = '\0';
    sex = s;
}

void Student::display()
{
    std::cout << "num: " << num << std::endl;
    std::cout << "name: " << name << std::endl;
    std::cout << "sex: " << sex << std::endl;
}

void Student::set_value(int n, const char* nam, char s)
{
    num = n;
    int i = 0;
    while (nam[i] != '\0' && i < 19) {
        name[i] = nam[i];
        i++;
    }
    name[i] = '\0';
    sex = s;
}