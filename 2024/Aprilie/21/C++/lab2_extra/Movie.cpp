#include "Movie.h"
#include <ctime>
#include <iostream>

using namespace std;

Movie::Movie() : name(""), year(0), score(0.0), length(0) {}

void Movie::set_name(const string& name) {
    this->name = name.substr(0, 256); // Ensures the name does not exceed 256 characters
}

string Movie::get_name() const {
    return name;
}

void Movie::set_year(int year) {
    this->year = year;
}

int Movie::get_year() const {
    return year;
}

void Movie::set_score(double score) {
    if (score >= 1.0 && score <= 10.0) {
        this->score = score;
    } else {
        cerr << "Invalid score. Must be between 1.0 and 10.0." << endl;
    }
}

double Movie::get_score() const {
    return score;
}

void Movie::set_length(int length) {
    this->length = length;
}

int Movie::get_length() const {
    return length;
}

int Movie::passed_years() const {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int current_year = 1900 + ltm->tm_year;
    return current_year - year;
}
