#pragma once
#include <string>

class Movie {
private:
    std::string name;
    int year;
    double score;
    int length;

public:
    Movie();
    void set_name(const std::string& name);
    std::string get_name() const;

    void set_year(int year);
    int get_year() const;

    void set_score(double score);
    double get_score() const;

    void set_length(int length);
    int get_length() const;

    int passed_years() const; // Calculates the years passed since the release
};
