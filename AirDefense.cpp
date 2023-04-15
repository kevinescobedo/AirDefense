#include "AirDefense.hpp"

AirDefense::AirDefense(unsigned int width, unsigned int height)
:window("Air Defense", width, height)
{

}

AirDefense::AirDefense(const sf::Vector2u& dimensions)
:AirDefense(dimensions.x, dimensions.y)
{

}

AirDefense::AirDefense(const AirDefense& airdefense)
:window(airdefense.window)
{

}

AirDefense& AirDefense::operator =(const AirDefense& airdefense)
{
    window = airdefense.window;

    return *this;
}

AirDefense::~AirDefense()
{
    if(window.isOpen())
    {
        window.close();
    }
}

void AirDefense::play()
{
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            switch(event.type)
            {
                case sf::Event::Closed:
                {
                    window.close();
                    break;
                }

                default:
                {
                    break;
                }
            }
        }

        window.clear();
        //Draw stuff
        window.display();
    }
}

std::ostream& operator <<(std::ostream& os, const AirDefense& airdefense)
{
    os<<"Window Information:\n";
    os<<airdefense.window;

    return os;
}
