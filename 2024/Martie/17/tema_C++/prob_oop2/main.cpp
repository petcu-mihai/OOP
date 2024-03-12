#include <iostream>

using namespace std;

class Tablou
{
public:
    int *t; // tabloul unidimensional
    int n; // dimensiunea fizica si logica tabloului
    // constructorul
    Tablou(int dim, int a, int b, int c, int d)
    {
        n = dim;
        t = new int[n];
        t[0] = a;
        for (int i = 1; i < n; i++)
            t[i] = 1 + (t[i - 1] * b + c) % d;
    }
    // destructorul
    ~Tablou()
    {
        n = 0;
        delete[] t;
    }
    // afiseaza tabloul
    void Afiseaza()
    {
        for (int i = 0; i < n; i++)
        {
            cout << t[i] << " ";
        }
        cout << endl;
    }

    // returneaza maximul din t
    int Max()
    {
        int maxim = t[0];
        for (int i = 1; i < n; i++)
        {
            if (t[i] > maxim)
                maxim = t[i];
        }
        return maxim;
    }
    // returneaza prima pozitie unde se gaseste val in t,
    // sau returneaza -1 daca val nu apare in t
    int Cauta(int val)
    {
        for (int i = 0; i < n; i++)
        {
            if (t[i] == val)
                return i;
        }
        return -1;
    }
};

int main() 
{
    Tablou T(5,3,26,23,41);
    T.Afiseaza();
    cout << "Max este: " << T.Max() << endl;
    cout << "Elem cu val max se afla pe pozitia " << T.Cauta(T.Max());

    return 0;
}