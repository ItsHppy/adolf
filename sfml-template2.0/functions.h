#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"

void batInit(sf::RectangleShape& bat, const sf::Color batColor, const sf::Vector2f BAT_START_POS) {
	bat.setSize(BAT_SIZE);
	bat.setFillColor(batColor);
	bat.setPosition(BAT_START_POS);
}

bool pointInRect(sf::RectangleShape bat, sf::Vector2f point) {
	return	bat.getPosition().x <= point.x &&
		point.x <= bat.getPosition().x + BAT_SIZE.x &&
		bat.getPosition().y <= point.y &&
		point.y <= bat.getPosition().y + BAT_SIZE.y;
}

void ballInit(sf::CircleShape& ball, const sf::Vector2f BALL_START_POS) {
	ball.setRadius(BALL_RADIUS);
	ball.setFillColor(BALL_COLOR);
	ball.setPosition(BALL_START_POS);
}

void textInit(sf::Text& text, sf::Font& font, int score, sf::Vector2f textPos) {
	text.setString(std::to_string(score));
	text.setFont(font);
	text.setCharacterSize(FONT_SIZE);
	text.setPosition(LEFT_TEXT_POS);
}