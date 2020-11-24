#include"Deck.h"
#include"ctime"

Deck::Deck()
{
	string rank1[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	for (int i = 0; i < 13; i++)
	{
		Card* Spades = new Card("Spades", rank1[i]);
		deck.push_back(Spades);

		Card* Clubs = new Card("Clubs", rank1[i]);
		deck.push_back(Clubs);

		Card* Diamonds = new Card("Diamonds", rank1[i]);
		deck.push_back(Diamonds);

		Card* Hearts = new Card("Hearts", rank1[i]);
		deck.push_back(Hearts);
	}

}
void Deck::shuffle()
{
	srand(time(NULL)); 
	for (int j = 0; j < 100; j++)
	{
		for (int i = 0; i < deck.size(); i++)
		{
			int randCard = rand() % deck.size();
			Card* card = deck[i];

			deck[i] = deck[randCard];
			deck[randCard] = card;
		}
	}
}
void Deck::showDeck()
{
	cout << "-----Deck-----" << endl;
	for (int i = 0; i < deck.size(); i++)
	{
		cout << deck[i]->getRank() << " of " << deck[i]->getSuit() << endl;
	}
}
