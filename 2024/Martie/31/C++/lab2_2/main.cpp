#include "Student.h"
#include "StudentComparisons.h"
#include <iostream>

using namespace std;

int main() {
    Student student1, student2;
    
    student1.setName("Maria");
    student1.setMathGrade(8);
    student1.setEnglishGrade(9);
    student1.setHistoryGrade(7);

    student2.setName("Ion");
    student2.setMathGrade(6);
    student2.setEnglishGrade(7);
    student2.setHistoryGrade(8);

    cout << "Comparare după nume: ";
    if (compareByName(student1, student2) == 0) {
        cout << "Amândoi studenții au același nume." << endl;
    } else if (compareByName(student1, student2) < 0) {
        cout << student1.getName() << " vine înaintea lui " << student2.getName() << " în ordine alfabetică." << endl;
    } else {
        cout << student2.getName() << " vine înaintea lui " << student1.getName() << " în ordine alfabetică." << endl;
    }

    cout << "Comparare după nota la Matematică: ";
    if (compareByMathGrade(student1, student2) == 0) {
        cout << "Amândoi studenții au aceeași notă la Matematică." << endl;
    } else if (compareByMathGrade(student1, student2) < 0) {
        cout << student1.getName() << " are o notă mai mică la Matematică decât " << student2.getName() << "." << endl;
    } else {
        cout << student1.getName() << " are o notă mai mare la Matematică decât " << student2.getName() << "." << endl;
    }

    cout << "Comparare după nota la Engleză: ";
    if (compareByEnglishGrade(student1, student2) == 0) {
        cout << "Amândoi studenții au aceeași notă la Engleză." << endl;
    } else if (compareByEnglishGrade(student1, student2) < 0) {
        cout << student1.getName() << " are o notă mai mică la Engleză decât " << student2.getName() << "." << endl;
    } else {
        cout << student1.getName() << " are o notă mai mare la Engleză decât " << student2.getName() << "." << endl;
    }

    cout << "Comparare după nota la Istorie: ";
    if (compareByHistoryGrade(student1, student2) == 0) {
        cout << "Amândoi studenții au aceeași notă la Istorie." << endl;
    } else if (compareByHistoryGrade(student1, student2) < 0) {
        cout << student1.getName() << " are o notă mai mică la Istorie decât " << student2.getName() << "." << endl;
    } else {
        cout << student1.getName() << " are o notă mai mare la Istorie decât " << student2.getName() << "." << endl;
    }

    cout << "Comparare după medie: ";
    if (compareByAverageGrade(student1, student2) == 0) {
        cout << "Amândoi studenții au aceeași notă medie." << endl;
    } else if (compareByAverageGrade(student1, student2) < 0) {
        cout << student1.getName() << " are o medie mai mică decât " << student2.getName() << "." << endl;
    } else {
        cout << student1.getName() << " are o medie mai mare decât " << student2.getName() << "." << endl;
    }

    return 0;
}