#ifndef AIRDEFENSE_HPP
#define AIRDEFENSE_HPP

#include <SFML/System/Vector2.hpp>
#include <iostream>
#include "Window.hpp"

class AirDefense
{
private:
    Window window;

public:
    AirDefense(unsigned int width, unsigned int height);
    AirDefense(const sf::Vector2u& dimensions);
    AirDefense(const AirDefense& airdefense);
    AirDefense& operator =(const AirDefense& airdefense);
    ~AirDefense();
    void play();
    friend std::ostream& operator <<(std::ostream& os, const AirDefense& airdefense);
};

#endif /* AIRDEFENSE_HPP */
