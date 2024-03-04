#include <iostream>

using namespace std;

class Person{

private:
    int Age, Height;
public:
    // constructor
    Person()
    {
        this -> Age = 10;
        this -> Height = 100;
    }
    // destructor
    ~Person()
    {
        this -> Age = 0;
        this -> Height = 0;
    }
    void SetAge(int Age)
    {
        if(Age >= 1 && Age <= 200)
            this -> Age = Age;
    }
    void SetHeight(int Height)
    {
        if(Height >= 30 && Height <= 250)
            this -> Height = Height;
    }
    // getter in interiorul clasei
    int GetAge()
    {
        return this -> Age;
    }
    int GetHeight()
    {
        return this -> Height;
    }
    
};

int main()
{
    Person p1;
    p1.SetAge(25); // p1.Age = 25
    cout << "Age is " << p1.GetAge();
    return 0;
}
