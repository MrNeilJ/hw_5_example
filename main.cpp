#include <iostream>
#include "Movie.hpp"

int main()
{
    Movie mov1("Sharktopus", "Charlie Chaplin", 1000, 503);
    mov1.printInfo();

    mov1.setDirector("Winston Churchill");
    mov1.printInfo();

    Movie mov2;
    mov2.printInfo();

    return 0;
}