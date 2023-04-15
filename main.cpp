#include "AirDefense.hpp"
#include <iostream>

int main(int argc, char** argv)
{
    if(argc != 3)
    {
        std::cerr<<"Usage: "<<argv[0]<<" <width> <height>\n";
        return 1;
    }

    unsigned int width = atoi(argv[1]);
    unsigned int height = atoi(argv[2]);

    AirDefense game(width, height);
    game.play();

    return 0;
}
