#ifndef METEOR_HPP
#define METEOR_HPP

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/Color.hpp>
#include <iostream>
#include <random>

class Meteor: public sf::CircleShape
{
private:
    float velocity;

public:
    Meteor(float radius);
    Meteor(const Meteor& meteor);
    Meteor& operator =(const Meteor& meteor);
    void update();
    friend std::ostream& operator <<(std::ostream& os, const Meteor& meteor);

private:
    static sf::Color randomColor();
};

#endif /* METEOR_HPP */
