#include <iostream>
#include <string>
#include "Movie.hpp"

Movie::Movie()
{
    setTitle("");
    setDirector("");
    setYearReleased(0);
    setLengthInMinutes(0);
}

Movie::Movie(std::string titleIn, std::string directorIn, int yearIn, int lengthIn)
{
    setTitle(titleIn);
    setDirector(directorIn);
    setYearReleased(yearIn);
    setLengthInMinutes(lengthIn);
}

void Movie::setTitle(std::string titleIn)
{
    title = titleIn;
}

std::string Movie::getTitle()
{
    return title;
}

void Movie::setDirector(std::string directorIn)
{
    director = directorIn;
}

std::string Movie::getDirector()
{
    return director;
}

void Movie::setYearReleased(int yearIn)
{
    yearReleased = yearIn;
}

int Movie::getYearReleased()
{
    return yearReleased;
}

void Movie::setLengthInMinutes(int lengthIn)
{
    lengthInMinutes = lengthIn;
}

int Movie::getLengthInMinutes()
{
    return lengthInMinutes;
}

void Movie::printInfo()
{
    std::cout << "Title: " << title << std::endl;
    std::cout << "Director: " << director << std::endl;
    std::cout << "Year released: " << yearReleased << std::endl;
    std::cout << "Length in minutes: " << lengthInMinutes << std::endl;
    std::cout << std::endl;  // just to get a blank line
}