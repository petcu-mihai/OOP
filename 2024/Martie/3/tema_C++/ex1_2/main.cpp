#include "person.hpp"
#include <iostream>

using namespace std;

int Person::GetAge()
{
    return this -> Age;
}

int Person::GetHeight()
{
    return this -> Height;
}

int main()
{
    Person p1;
    p1.SetHeight(200);
    cout << "Height is " << p1.GetHeight() << "cm";
    return 0;
}