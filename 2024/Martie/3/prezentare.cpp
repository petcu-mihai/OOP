#include <iostream>

using namespace std;

class Person{
    // by default, toate data members & methods sunt private
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
    
    // ca tema pentru acasa,de implementat GetAge si GetHeight
    // in 2 moduri: 1) in interiorul clasei
    // 2) in afara clasei
    // Sa implementate atat in c++, cat si in typescript
};

// Alt exercitiu: O clasa intitulata Complex (private: float re, im;)
// Aiba urmatoarele metode:
// 1) Constructor + Constructor de copiere, ca parametru: un tip de data Complex
// Ex: z1 = 1 + i -> Complex z2(z1);
// 2) (Optional) Destructor
// 3) Functii Get si Set pe partea reala si imaginara
// 4) Functia modul (sqrt(re^2 + im^2))
// Vreau ca metodele sa fie implementate atat in interiorul clasei, cat si in afara
// Sa scrii implementarile si in typescript
// + Repo github
int main()
{
    Person p1;
    p1.SetAge(25); // p1.Age = 25
    
    return 0;
}
