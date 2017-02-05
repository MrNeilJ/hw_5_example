#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <string>

// Defines the interface of the Movie class
class Movie
{
private:
    std::string title;
    std::string director;
    int yearReleased;
    int lengthInMinutes;
public:
    Movie();
    Movie(std::string, std::string, int, int);
    void setTitle(std::string);
    std::string getTitle();
    void setDirector(std::string);
    std::string getDirector();
    void setYearReleased(int);
    int getYearReleased();
    void setLengthInMinutes(int);
    int getLengthInMinutes();
    void printInfo();
};
#endif