#include<string>
#include<iostream>

using namespace std;

class Card
{
private:
	string rank;
	string suit;

public:

	Card(string s, string r);
	
	void setRank(string ra)
	{
		rank = ra;
	}
	string getRank()
	{
		return rank;
	}

	void setSuit(string su)
	{
		suit = su;
	}
	string getSuit()
	{
		return suit;
	}

};
