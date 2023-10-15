#include "Meteor.hpp"

Meteor::Meteor(float radius)
:sf::CircleShape(radius), velocity()
{
    setFillColor(randomColor());
    std::random_device rd;
    std::uniform_real_distribution<float> range(1.0, 10.0);
    velocity = range(rd);
}

Meteor::Meteor(const Meteor& meteor)
:Meteor(meteor.getRadius())
{
    setFillColor(meteor.getFillColor());
    velocity = meteor.velocity;
}

Meteor& Meteor::operator =(const Meteor& meteor)
{
    Meteor(meteor.getRadius());
    setFillColor(meteor.getFillColor());
    velocity = meteor.velocity;
    return *this;
}

void Meteor::update()
{
    move(0, velocity);
}

std::ostream& operator <<(std::ostream& os, const Meteor& meteor)
{
    os<<"Radius: "<<meteor.getRadius()<<'\n';
    os<<"Velocity: "<<meteor.velocity<<'\n';

    sf::Color color = meteor.getFillColor();
    os<<"Color: ("<<color.r<<", "<<color.g<<", "<<color.b<<")";

    return os;
}

sf::Color Meteor::randomColor()
{
    std::random_device rd;
    std::uniform_int_distribution<int> range(0, 255);

    int redValue = range(rd);
    int greenValue = range(rd);
    int blueValue = range(rd);

    return sf::Color(redValue, greenValue, blueValue);
}
