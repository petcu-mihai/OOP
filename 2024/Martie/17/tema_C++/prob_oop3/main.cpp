#include <iostream>
using namespace std;

class Stiva {
private:
    int* elemente; // pointer la primul element
    int capacitate;
    int dimensiune;
    int maxim;

    void verificaSiDubleazaCapacitatea() {
        if (dimensiune >= capacitate) {
            capacitate *= 2;
            int* nouElemente = new int[capacitate]; // alocare dinamica at runtime
            for (int i = 0; i < dimensiune; ++i) {
                nouElemente[i] = elemente[i];
            }
            delete[] elemente;
            elemente = nouElemente;
        }
    }

public:
    Stiva() : capacitate(1), dimensiune(0), maxim(-1) {
        elemente = new int[capacitate]; // alocare dinamica at runtime
    }

    ~Stiva() {
        delete[] elemente;
    }

    void Push(int x) {
        verificaSiDubleazaCapacitatea();
        elemente[dimensiune++] = x;
        // primul element adaugat e considerat maxim by default si apoi se schimba daca este adaugat altul mai mare
        if (dimensiune == 1 || x > maxim) {
            maxim = x;
        }
    }

    void Pop() {
        if (dimensiune == 0) {
            return;
        }
        // Daca elementul scos este maximul, trebuie sa recalculez maximul
        if (elemente[dimensiune - 1] == maxim) {
            maxim = -1;
            for (int i = 0; i < dimensiune - 1; ++i) {
                if (maxim < elemente[i]) {
                    maxim = elemente[i];
                }
            }
        }
        dimensiune--;
    }

    int Top() {
        if (dimensiune == 0) {
            return -1;
        }
        return elemente[dimensiune - 1];
    }

    int Max() {
        return maxim;
    }

    int Empty() {
        // returneaza 1 daca e goala si 0 daca are elemente
        return dimensiune == 0 ? 1 : 0;
    }
};

int main() {
    Stiva w;
    w.Push(4);
    w.Push(2);
    w.Push(5);
    w.Push(1);
    cout << w.Top() << " " << w.Max() << "\n"; // Afiseaza 1 5
    w.Pop();
    w.Pop();
    cout << w.Top() << " " << w.Max() << "\n"; // Afiseaza 2 4
    return 0;
}