#include <iostream>
class Card
{
protected:
    int Num;
    //could have a bool status
    //or a bool played if they are useful
public:
    Card(int n)
    {
        Num = n;
    }
    ~Card();
    virtual void display();
};

class Spade : public Card
{
public:
    Spade(int n) : Card(n)
    {
    }
};
class Club : public Card
{
    Club(int n) : Card(n)
    {
    }
};
class Diamond : public Card
{
    Diamond(int n) : Card(n)
    {
    }
};
class Heart : public Card
{
    Heart(int n) : Card(n)
    {
    }
};