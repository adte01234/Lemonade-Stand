#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

sf::Font myFont;
myFont.loadFromFile("font/Candal.ttf");

sf::Text myText;
myText.setFont(myFont);
myText.setString("Lemonades: ");
myText.setCharacterSize(24);
myText.setColor(sf::Color::White);
myText.setPosition(200, 200);

sf::Text myCount;
myCount.setFont(myFont);
myCount.setCharacterSize(24);
myCount.setColor(sf::Color::White);
myCount.setPosition(200, 250);

sf::Text lemonadeCount;
lemonadeCount.setFont(myFont);
lemonadeCount.setColor(sf::Color::White);
lemonadeCount.setPosition(1550, 250);

sf::Text lemonadeStandCostText;
lemonadeStandCostText.setFont(myFont);
lemonadeStandCostText.setCharacterSize(16);
lemonadeStandCostText.setColor(sf::Color::White);
lemonadeStandCostText.setPosition(1625, 250);

sf::Text kidsCostText;
kidsCostText.setFont(myFont);
kidsCostText.setCharacterSize(16);
kidsCostText.setColor(sf::Color::White);
kidsCostText.setPosition(1625, 150);

sf::Text lemonadeKidsCountText;
lemonadeKidsCountText.setFont(myFont);
lemonadeKidsCountText.setCharacterSize(24);
lemonadeKidsCountText.setColor(sf::Color::White);
lemonadeKidsCountText.setPosition(1550, 150);


sf::Texture background;
sf::Sprite bgSprite;
background.loadFromFile("Textures/hill-meadow-tree-green.jpg");
bgSprite.setTexture(background);
bgSprite.setOrigin(0, 0);
window.setFramerateLimit(60);
bgSprite.setScale(0.44776119404, 0.37921348315);

sf::Texture lemonadeStand;
sf::Sprite lemonadeSprite;
lemonadeStand.loadFromFile("Textures/Lemonade-Stand.png");
lemonadeSprite.setTexture(lemonadeStand);
lemonadeSprite.setPosition(750, 450);
lemonadeSprite.setScale(1, 1);

sf::Texture lemonadeKids;
sf::Sprite kidsSprite;
lemonadeKids.loadFromFile("textures/happy-school-children-clipart.png");
kidsSprite.setTexture(lemonadeKids);
kidsSprite.setPosition(1450, 165);
kidsSprite.setScale(0.2, 0.2);

sf::Texture businessMan;
sf::Sprite businessSprite;
lemonadeKids.loadFromFile("textures/businessman_clipart.png");
businessSprite.setPosition(1450, 315);
businessSprite.setScale(0.1, 0.1);

sf::Texture shelf;
sf::Sprite shelfSprite;
shelf.loadFromFile("Textures/shelf-clipart-shelves-hi.png");
shelfSprite.setTexture(shelf);
shelfSprite.setPosition(1400, 150);
shelfSprite.setScale(0.6, 1);

sf::Sprite lemonadeStands;
lemonadeStands.setTexture(lemonadeStand);
lemonadeStands.setPosition(1450, 240);
lemonadeStands.setScale(0.35, 0.35);