#include "MovieComparison.h"

/**
 * Compares two movies based on their names.
 * 
 * @param a The first movie to compare.
 * @param b The second movie to compare.
 * @return -1 if the name of movie a comes before the name of movie b,
 *         1 if the name of movie a comes after the name of movie b,
 *         0 if the names of the movies are the same.
 */
int movie_compare_name(const Movie& a, const Movie& b) {
    if (a.get_name() < b.get_name()) return -1;
    if (a.get_name() > b.get_name()) return 1;
    return 0;
}

/**
 * Compares two movies based on their release year.
 * 
 * @param a The first movie to compare.
 * @param b The second movie to compare.
 * @return A negative value if `a` was released before `b`, 
 *         a positive value if `a` was released after `b`,
 *         or zero if both movies were released in the same year.
 */
int movie_compare_year(const Movie& a, const Movie& b) {
    return a.get_year() - b.get_year();
}

/**
 * Compares the scores of two movies.
 * 
 * @param a The first movie to compare.
 * @param b The second movie to compare.
 * @return -1 if the score of movie a is less than the score of movie b,
 *          1 if the score of movie a is greater than the score of movie b,
 *          0 if the scores of both movies are equal.
 */
int movie_compare_score(const Movie& a, const Movie& b) {
    if (a.get_score() < b.get_score()) return -1;
    if (a.get_score() > b.get_score()) return 1;
    return 0;
}

/**
 * Compares the lengths of two movies.
 * 
 * @param a The first movie to compare.
 * @param b The second movie to compare.
 * @return A negative value if the length of movie a is less than the length of movie b,
 *         0 if the lengths are equal, and a positive value if the length of movie a is
 *         greater than the length of movie b.
 */
int movie_compare_length(const Movie& a, const Movie& b) {
    return a.get_length() - b.get_length();
}

/**
 * Compares two movies based on the number of years that have passed since their release.
 * 
 * @param a The first movie to compare.
 * @param b The second movie to compare.
 * @return The difference in the number of years that have passed since the release of the two movies.
 */
int movie_compare_passed_years(const Movie& a, const Movie& b) {
    return a.passed_years() - b.passed_years();
}
