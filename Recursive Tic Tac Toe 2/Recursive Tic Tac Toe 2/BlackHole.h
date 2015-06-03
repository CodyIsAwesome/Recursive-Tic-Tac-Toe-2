#pragma once
#include <SFML/Graphics.hpp>

class BlackHole
{
public:
	BlackHole();
	BlackHole(float x, float y);
	BlackHole(sf::Vector2f pos);
	~BlackHole();

	void Draw();
	sf::Vector2f GetPosition();
	float GetStrength();
	float GetEventHorizon();

private:
	sf::Vector2f position;
};