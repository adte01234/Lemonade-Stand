#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <Windows.h>
#include <chrono>
#include <thread>

using namespace std;

float lemonades = 0.0;

int lemonadeKidsCount = 0;
int lemonadeKidsCost = 10;
float kidsProfit = 0.01;
float kidsCostIncrease = 0.1;

int lemonadeStandCount = 0;
int lemonadeStandCost = 500;
float lemonadeProfit = 0.5;
int lemonadeCostIncrease = 1;

int businessCount = 0;
int businessCost = 25000;
int businessProfit = 2.5;
int businessCostIncrease = 10;

int displayLemonades = 0;

int pointerUpgradeCost = 50000;
int pointerUpgradeCount = 0;
int pointerUpgradeFactor = 100;
int iceUpgradeCost = 1000000;
int upgradeCostDistance = 125;

int iceX = 500;
int iceY = 100;

int pointX = 800;
int pointY = 100;

int truckX = 500;
int truckY = 600;

int iceUpgradeCount = 0;

int timeForIntro = 3000;
bool gameStart = false;
int lemonadesPerClick;

/*

*/