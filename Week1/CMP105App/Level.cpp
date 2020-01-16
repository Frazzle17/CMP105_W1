#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 5));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	circle.setRadius(50);
	circle.setPosition(600, 337.5);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(2.f);

	square1.setSize(sf::Vector2f(40, 40));
	square1.setPosition(200, 200);
	square1.setFillColor(sf::Color::Red);

	square2.setSize(sf::Vector2f(20, 20));
	square2.setPosition(210, 210);
	square2.setFillColor(sf::Color::Green);

	square3.setSize(sf::Vector2f(10, 10));
	square3.setPosition(215, 215);
	square3.setFillColor(sf::Color::Blue);

	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error loading font" << std::endl;
	}
	text.setFont(font);
	text.setString("Hello World!");
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Red);
	text.setPosition(600, 0);

	rect2.setSize(sf::Vector2f(-50, -50));
	rect2.setFillColor(sf::Color::Green);
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();;
	rect2.setPosition(pos.x, pos.y);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(rect);
	window->draw(circle);
	window->draw(square1);
	window->draw(square2);
	window->draw(square3);
	window->draw(text);
	window->draw(rect2);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}