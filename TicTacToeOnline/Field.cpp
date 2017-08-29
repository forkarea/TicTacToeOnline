#include "Field.h"

Field::Field(sf::FloatRect position, sf::Texture & texture) : sf::Sprite{ texture }
{
	setScale(sf::Vector2f{ position.height / texture.getSize().x,position.width / texture.getSize().y });
}

Field::~Field()
{
}