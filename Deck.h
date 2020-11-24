#pragma once
#include"Card.h"
#include<string>
#include<iostream>
#include<vector>


using namespace std;

class Deck
{
private:

	vector<Card*> deck;

public:
	Deck();
	void shuffle();
	void showDeck();
  }
