#define PERSON_H

class Person {
private:
    int Age, Height;

public:
    // constructor
    Person()
    {
        this->Age = 10;
        this->Height = 100;
    }

    // destructor
    ~Person()
    {
        this->Age = 0;
        this->Height = 0;
    }

    void SetAge(int Age)
    {
        if (Age >= 1 && Age <= 200)
            this->Age = Age;
    }

    void SetHeight(int Height)
    {
        if (Height >= 30 && Height <= 250)
            this->Height = Height;
    }
    
    // definite in exteriorul clasei
    int GetAge();
    int GetHeight();
};
