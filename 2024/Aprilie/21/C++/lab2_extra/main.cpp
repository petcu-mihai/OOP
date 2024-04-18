#include <iostream>
#include "Movie.h"
#include "MovieSeries.h"
#include "MovieComparison.h"

using namespace std;

int main() {
    Movie ep5;
    ep5.set_name("Star Wars: Episode V - The Empire Strikes Back");
    ep5.set_score(8.7);
    ep5.set_year(1980);
    ep5.set_length(124);

    Movie ep4;
    ep4.set_name("Star Wars: Episode IV - A New Hope");
    ep4.set_score(8.6);
    ep4.set_year(1977);
    ep4.set_length(121);

    Movie ep6;
    ep6.set_name("Star Wars: Episode VI - Return of the Jedi");
    ep6.set_score(8.3);
    ep6.set_year(1983);
    ep6.set_length(131);

    cout << "Comparisons between ep4 and ep5:" << endl;
    cout << "Name: " << (movie_compare_name(ep4, ep5) == 0 ? "Same" : (movie_compare_name(ep4, ep5) > 0 ? "ep4 comes after ep5" : "ep4 comes before ep5")) << endl;
    cout << "Year: " << (movie_compare_year(ep4, ep5) == 0 ? "Same" : (movie_compare_year(ep4, ep5) > 0 ? "ep4 was released after ep5" : "ep4 was released before ep5")) << endl;
    cout << "Score: " << (movie_compare_score(ep4, ep5) == 0 ? "Same" : (movie_compare_score(ep4, ep5) > 0 ? "ep4 has higher score than ep5" : "ep4 has lower score than ep5")) << endl;
    cout << "Length: " << (movie_compare_length(ep4, ep5) == 0 ? "Same" : (movie_compare_length(ep4, ep5) > 0 ? "ep4 is longer than ep5" : "ep4 is shorter than ep5")) << endl;
    cout << "Passed years: " << (movie_compare_passed_years(ep4, ep5) == 0 ? "Same" : (movie_compare_passed_years(ep4, ep5) > 0 ? "More years have passed since ep4 was released" : "More years have passed since ep5 was released")) << endl;
    cout << endl;

    MovieSeries series;
    series.init();
    series.add(&ep5);
    series.add(&ep4);
    series.add(&ep6);

    cout << "Sort by release year:" << endl; 
    series.sort();
    series.print();
}