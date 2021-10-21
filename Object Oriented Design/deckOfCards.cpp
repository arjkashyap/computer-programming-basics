/**

						DESIGN A DECK OF CARDS
**/

#include<iostream>
 
using namespace std;

enum Suit
{
	Spades,
	Heart,
	Diamond,
	Brick
};

class Card
{
private:
	int Value;
	Suit Face;
	int Points;
	bool IsAvail;
public: 
	Card(Suit face, int Value) : Face(face), Value(value), Points(value, IsAvail(true){}
	int getValue(){ return Value;}
	Face getFace(){return Face;}
	
	bool isAvailable(){return IsAvail;}
	
	void setCardUsed(){isAvail=false;}
	void setCardAvail(){isAvail=true;}
	
	// set points 
	virtual void setPoint(int points){
		Points = points;
	}
	
};

class Deck
{
	vector<Card> CardsArr;
	int AvailNum; 		// number of cards that are available to draw from deck;
	
public: 
	Deck(){ . . . . };		// init deck of cards
	void shuffleCards(){}
	
	void displayAvailCardsNum(){}
	
	void displayAvailCards()
	{
		for(Card& card : CardsArr){
			if(card.isAvail())
				cout << card -> value << " " << card -> suit << " ";
		}
	}
	
	virtual void dealCards() = 0;
	virtual void dealHand() = 0;
};