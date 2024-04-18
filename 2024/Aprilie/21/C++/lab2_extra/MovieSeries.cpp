#include "MovieSeries.h"
#include "MovieComparison.h"
#include <iostream>
#include <algorithm>

using namespace std;

MovieSeries::MovieSeries() : count(0) {}

void MovieSeries::init() {
    count = 0;
}

void MovieSeries::add(Movie* movie) {
    if (count < 16) {
        movies[count++] = movie;
    } else {
        cerr << "Series is full. Cannot add more movies." << endl;
    }
}

void MovieSeries::print() const {
    for (int i = 0; i < count; ++i) {
        cout << "Movie: " << movies[i]->get_name()
             << ", Year: " << movies[i]->get_year()
             << ", Score: " << movies[i]->get_score()
             << ", Length: " << movies[i]->get_length() << " mins"
             << ", Passed Years: " << movies[i]->passed_years() << endl;
    }
}

void MovieSeries::sort() {
    std::sort(movies, movies + count, [](const Movie* a, const Movie* b) {
        return movie_compare_passed_years(*a, *b) > 0;
    });
}
