#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student {
    string name;
    float mathGrade;
    float englishGrade;
    float historyGrade;

public:
    Student();
    void setName(const string& newName);
    string getName() const;
    
    void setMathGrade(float grade);
    float getMathGrade() const;

    void setEnglishGrade(float grade);
    float getEnglishGrade() const;

    void setHistoryGrade(float grade);
    float getHistoryGrade() const;

    float getAverageGrade() const;
};

#endif
