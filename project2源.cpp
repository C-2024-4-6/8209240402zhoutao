#include <iostream>
#include "project2.h"

int main()
{
    Student stud;
    stud.set_value(101, "Bob", 'M');
    stud.display();

    Student stud1(007, "tcg", 'm');
    stud1.display();

    return 0;
}