#include "StudentComparisons.h"

int compareByName(const Student& student1, const Student& student2) {
    return student1.getName().compare(student2.getName());
}

int compareByMathGrade(const Student& student1, const Student& student2) {
    return student1.getMathGrade() == student2.getMathGrade() ? 0 :
           student1.getMathGrade() > student2.getMathGrade() ? 1 : -1;
}

int compareByEnglishGrade(const Student& student1, const Student& student2) {
    return student1.getEnglishGrade() == student2.getEnglishGrade() ? 0 :
           student1.getEnglishGrade() > student2.getEnglishGrade() ? 1 : -1;
}

int compareByHistoryGrade(const Student& student1, const Student& student2) {
    return student1.getHistoryGrade() == student2.getHistoryGrade() ? 0 :
           student1.getHistoryGrade() > student2.getHistoryGrade() ? 1 : -1;
}

int compareByAverageGrade(const Student& student1, const Student& student2) {
    return student1.getAverageGrade() == student2.getAverageGrade() ? 0 :
            student1.getAverageGrade() > student2.getAverageGrade() ? 1 : -1;
}
