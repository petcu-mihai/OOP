#include "Student.h"

using namespace std;

Student::Student() : mathGrade(0), englishGrade(0), historyGrade(0) {}

void Student::setName(const string& newName) {
    name = newName;
}

string Student::getName() const {
    return name;
}

void Student::setMathGrade(float grade) {
    mathGrade = grade >= 1 && grade <= 10 ? grade : 0;
}

float Student::getMathGrade() const {
    return mathGrade;
}

void Student::setEnglishGrade(float grade) {
    englishGrade = grade >= 1 && grade <= 10 ? grade : 0;
}

float Student::getEnglishGrade() const {
    return englishGrade;
}

void Student::setHistoryGrade(float grade) {
    historyGrade = grade >= 1 && grade <= 10 ? grade : 0;
}

float Student::getHistoryGrade() const {
    return historyGrade;
}

float Student::getAverageGrade() const {
    return (mathGrade + englishGrade + historyGrade) / 3;
}
