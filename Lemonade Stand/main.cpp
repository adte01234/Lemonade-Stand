
#include "Balancing.h"

using namespace std;

#pragma region Time

void delayScroll(int delayMS, int lineCOunt);

void delayScroll(int delayMS, int lineCount) {

	for (int i = 0; i < lineCount; i++)
	{
		cout << "" << endl;
		this_thread::sleep_for(chrono::milliseconds(delayMS));
	}

}


#pragma endregion


int main()
{
#pragma region intro
	char answer;
	cout << "Your name is Bob" << endl;
	this_thread::sleep_for(chrono::milliseconds(timeForIntro));
	delayScroll(10, 1);

	cout << "All you wanted was a small loan for some ice cream" << endl;
	this_thread::sleep_for(chrono::milliseconds(timeForIntro));
	delayScroll(10, 1);

	cout << "But, your horrible parents said they didn't have a million dollars" << endl;
	this_thread::sleep_for(chrono::milliseconds(timeForIntro));
	delayScroll(10, 1);

	cout << "So you decided to get the money yourself!" << endl;
	this_thread::sleep_for(chrono::milliseconds(timeForIntro));
	delayScroll(10, 1);

	cout << "Would you like to start a lemonade tycoon?" << endl;
	this_thread::sleep_for(chrono::milliseconds(timeForIntro));
	delayScroll(10, 1);

	cout << "Input 'y' or 'n'" << endl;
	cin >> answer;
	this_thread::sleep_for(chrono::milliseconds(timeForIntro/2));

	if (answer == 'y') { 
		cout << "Please press the fullscreen button when the game opens" << endl;
		this_thread::sleep_for(chrono::milliseconds(timeForIntro));
		cout << "Let's start!" << endl;
		this_thread::sleep_for(chrono::milliseconds(timeForIntro / 3));
		gameStart = true; }
	else if (answer == 'n')
		cout << "Filthy Communist" << endl;

	else {
		cout << "Well, this wasn't supposed to happen..." << endl;
		cout << "Try restarting the game" << endl;
	}

	if (gameStart) {

#pragma endregion

#pragma region TextAndWindow
		sf::RenderWindow window(sf::VideoMode(1920, 1080), "Lemonade Stand");
		window.setKeyRepeatEnabled(false);

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

		sf::Text businessCostText;
		businessCostText.setFont(myFont);
		businessCostText.setCharacterSize(16);
		businessCostText.setColor(sf::Color::White);
		businessCostText.setPosition(1625, 350);

		sf::Text businessCountText;
		businessCountText.setFont(myFont);
		businessCountText.setCharacterSize(24);
		businessCountText.setColor(sf::Color::White);
		businessCountText.setPosition(1550, 350);

		sf::Text pointerUpgradeCostText;
		pointerUpgradeCostText.setFont(myFont);
		pointerUpgradeCostText.setCharacterSize(16);
		pointerUpgradeCostText.setColor(sf::Color::White);
		pointerUpgradeCostText.setPosition(pointX + upgradeCostDistance, pointY + 25);

		sf::Text iceUpgradeCostText;
		iceUpgradeCostText.setFont(myFont);
		iceUpgradeCostText.setCharacterSize(16);
		iceUpgradeCostText.setColor(sf::Color::White);
		iceUpgradeCostText.setPosition(iceX + upgradeCostDistance, iceY + 25);

		sf::Text lemonadesPerClickText;
		lemonadesPerClickText.setFont(myFont);
		lemonadesPerClickText.setCharacterSize(14);
		lemonadesPerClickText.setColor(sf::Color::Yellow);


#pragma endregion

#pragma region Sprites
		sf::Texture background;
		sf::Sprite bgSprite;
		background.loadFromFile("Textures/hill-meadow-tree-green.jpg");
		bgSprite.setTexture(background);
		bgSprite.setOrigin(0, 0);
		window.setFramerateLimit(60);
		bgSprite.setScale(0.44776119404, 0.37921348315);

		sf::Texture lemonadeStand;
		sf::Sprite lemonadeSprite;
		lemonadeStand.loadFromFile("textures/Lemonade-Stand.png");
		lemonadeSprite.setTexture(lemonadeStand);
		lemonadeSprite.setOrigin(114, 109);
		lemonadeSprite.setPosition(864, 559);
		lemonadeSprite.setScale(1, 1);

		sf::Texture lemonadeKids;
		sf::Sprite kidsSprite;
		lemonadeKids.loadFromFile("textures/happy-school-children-clipart.png");
		kidsSprite.setTexture(lemonadeKids);
		kidsSprite.setPosition(1450, 165);
		kidsSprite.setScale(0.2, 0.2);

		sf::Texture businessMan;
		sf::Sprite businessSprite;
		businessMan.loadFromFile("textures/businessman_clipart.png");
		businessSprite.setTexture(businessMan);
		businessSprite.setPosition(1475, 340);
		businessSprite.setScale(0.013, 0.013);

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

		sf::Texture pointer;
		sf::Sprite pointerUpgrade;
		pointer.loadFromFile("textures/mouse-pointer-297595_960_720.png");
		pointerUpgrade.setTexture(pointer);
		pointerUpgrade.setPosition(pointX, pointY);
		pointerUpgrade.setScale(0.1, 0.1);

		sf::Texture iceCream;
		sf::Sprite iceCreamUpgrade;
		iceCream.loadFromFile("textures/Ice-Cream-Van.GIF");
		iceCreamUpgrade.setTexture(iceCream);
		iceCreamUpgrade.setPosition(iceX, iceY);
		iceCreamUpgrade.setScale(0.2, 0.2);

		sf::Sprite iceCreamTruck;
		iceCreamTruck.setTexture(iceCream);
		iceCreamTruck.setPosition(truckX, truckY);
		iceCreamTruck.setScale(1, 1);

		sf::Texture shelf2;
		sf::Sprite shelfUpgrade;
		shelf2.loadFromFile("textures/shelf_itself_zps2eb74db3.png");
		shelfUpgrade.setTexture(shelf2);
		shelfUpgrade.setScale(0.4, 0.3);

#pragma endregion

#pragma region startAndClick
		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					window.close();

				POINT point;
				if (GetCursorPos(&point)) {
				}

				cout << point.x << " , " << point.y << endl;

				if (event.type == event.MouseButtonPressed &&
					event.mouseButton.button == sf::Mouse::Left
					&& point.x < 975 &&
					point.x > 750 &&
					point.y > 450 && point.y < 650)
				{

					lemonadesPerClick = 1 + (((businessProfit * businessCount)
						+ (lemonadeProfit * lemonadeStandCount)
						+ (kidsProfit * lemonadeKidsCount))
						*pointerUpgradeCount*pointerUpgradeFactor);

					lemonades += lemonadesPerClick;
				}
#pragma endregion

#pragma region buyItems



				if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left &&
					point.x > 1445 &&
					point.y < 230 &&
					point.x < 1550 &&
					point.y > 180 &&
					lemonades >= lemonadeKidsCost)
				{
					lemonadeKidsCount += 1;
					lemonades -= lemonadeKidsCost;
					lemonadeKidsCost += (kidsCostIncrease*lemonadeKidsCount);
				}

				if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left &&
					point.x > 1445 &&
					point.y < 320 &&
					lemonades >= lemonadeStandCost &&
					point.x < 1550 &&
					point.y > 250) {
					lemonadeStandCount += 1;
					lemonades -= lemonadeStandCost;
					lemonadeStandCost += (lemonadeCostIncrease*lemonadeStandCount);
				}


				if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left &&
					point.x > 1445
					&& point.x < 1550
					&& point.y > 340
					&& point.y < 430
					&& lemonades >= businessCost) {
					businessCount += 1;
					lemonades -= businessCost;
					businessCost += (businessCostIncrease * businessCount);
				}

				if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left &&
					point.x > 500
					&& point.x < 610
					&& point.y > 115
					&& point.y < 180
					&& lemonades >= iceUpgradeCost
					&& iceUpgradeCount < 1)
				{
					lemonades -= iceUpgradeCost;
					iceUpgradeCount += 1;
					// Change upgrade and add story about travelling to mars because moon flavored ice cream was sold out
				}


				if (event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left
					&& point.x > 780
					&& point.x < 900
					&& point.y > 120
					&& point.y < 185
					&& lemonades >= pointerUpgradeCost)
				{
					lemonades -= pointerUpgradeCost;
					pointerUpgradeCount += 1;
					pointerUpgradeCost += (pointerUpgradeCount*pointerUpgradeCost);
					// change amount of lemons gained per click based on lemonades per second
				}


#pragma endregion

#pragma region setString
				lemonadeCount.setString(std::to_string(lemonadeStandCount));
				lemonadeStandCostText.setString("cost " + std::to_string(lemonadeStandCost));

				lemonadeKidsCountText.setString(std::to_string(lemonadeKidsCount));
				kidsCostText.setString("cost " + std::to_string(lemonadeKidsCost));

				businessCountText.setString(std::to_string(businessCount));
				businessCostText.setString("cost " + std::to_string(businessCost));

				pointerUpgradeCostText.setString("Cost: " + std::to_string(pointerUpgradeCost));
				iceUpgradeCostText.setString("Cost: " + std::to_string(iceUpgradeCost));

#pragma endregion

			}


#pragma region Draw
			window.clear();
			window.draw(bgSprite);
			if (iceUpgradeCount == 1) {
				window.draw(iceCreamTruck);
			}

			POINT point;
			if (GetCursorPos(&point)) {
			}

			if (event.type == event.MouseButtonPressed &&
				event.mouseButton.button == sf::Mouse::Left &&
				point.x < 975 &&
				point.x > 750 &&
				point.y > 450 && 
				point.y < 650) {
				lemonadeSprite.setScale(0.8, 0.8);
			}
			else
				lemonadeSprite.setScale(1, 1);


			window.draw(lemonadeSprite);
			window.draw(shelfSprite);
			window.draw(kidsSprite);
			window.draw(lemonadeStands);
			window.draw(businessSprite);

			window.draw(lemonadeKidsCountText);
			window.draw(lemonadeCount);
			window.draw(businessCountText);

			window.draw(kidsCostText);
			window.draw(lemonadeStandCostText);
			window.draw(businessCostText);

			window.draw(iceCreamUpgrade);
			shelfUpgrade.setPosition(iceX, iceY + 50);
			window.draw(shelfUpgrade);
			window.draw(iceUpgradeCostText);

			window.draw(pointerUpgrade);
			shelfUpgrade.setPosition(pointX, pointY + 50);
			window.draw(shelfUpgrade);
			window.draw(pointerUpgradeCostText);

			lemonades += (kidsProfit * lemonadeKidsCount);
			lemonades += (lemonadeProfit * lemonadeStandCount);
			lemonades += (businessProfit * businessCount);

			displayLemonades = lemonades;
			myCount.setString(std::to_string(displayLemonades));
			window.draw(myCount);

			window.draw(myText);
			window.display();
#pragma endregion

		}


#pragma region endGame
		if (iceUpgradeCount > 0)
		{
			gameStart = false;
			this_thread::sleep_for(chrono::milliseconds(timeForIntro));
			window.close();
			cout << "They only had healthy ice cream with vegetable extract" << endl;
			this_thread::sleep_for(chrono::milliseconds(timeForIntro));
			cout << "It was awfull" << endl;
			this_thread::sleep_for(chrono::milliseconds(timeForIntro/2));
			cout << "Thanks for playing!" << endl;

		}

#pragma endregion

	}



}