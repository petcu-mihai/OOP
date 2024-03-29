#ifndef STUDENTCOMPARISONS_H
#define STUDENTCOMPARISONS_H

#include "Student.h"

int compareByName(const Student& student1, const Student& student2);
int compareByMathGrade(const Student& student1, const Student& student2);
int compareByEnglishGrade(const Student& student1, const Student& student2);
int compareByHistoryGrade(const Student& student1, const Student& student2);
int compareByAverageGrade(const Student& student1, const Student& student2);

#endif
