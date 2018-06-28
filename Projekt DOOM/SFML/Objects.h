#pragma once

#include <SFML/Graphics.hpp>

class Object // klasa abstrakcyjna do dziedziczenia dla gracza i itemk�w
{
protected:
	sf::Vector2f position;
public:
	virtual void moveTo(sf::Vector2f);
	virtual double getPositionX();
	virtual double getPositionY();
	virtual sf::Vector2f getPosition();
	Object();
	Object(sf::Vector2f); // potrzebne?
	~Object();
};

// je�li itemki polegaj� tylko na powy�szych funkcjach (odpowiednio przeci��onych), to base pointer JEST OK