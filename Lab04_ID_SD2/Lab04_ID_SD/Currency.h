#pragma once
#ifndef CURRENCY_H
#define CURRENCY_H
#include <iostream>
#include <string>
class Currency {
protected:
	int wholePart, fractionPart;
	/*
This algorithm makes sure you don't exceed 99 cents and if it does
	it will convert to dollars and take the differenc and put it into cents.

Pre:
Post:
Return:

	if(coins>=100)
		note=note+(coin/100)
		coin=coin%100
	else if(coin<0)
		note=((abs(coin)/100)+1)
		coin=100-(abs(coin)%100

*/
	void simplify();


public:
	/*
These functions return the number of notes and coins.

Pre:
Post:
return: number of notes/coins

	return number of notes/coins

*/
	int getWholePart();
	int getFractionPart();

	/*
These functions are virtual functions that will be overridden by the child classes
Pre:
Post:
return: string

	getNoteName()
		return blank
	getCoinName()
		return blank

*/
	virtual std::string getWholeName();
	virtual std::string getFractionName();


	/*
This algorithm overloads the = operator and makes sure that two objects of the same type are added only.

Pre: reference to a pointer of a Currency object right
Post:Currency*&
return: void

	coin=right->coin
	note=right->note
*/
	void operator=(const Currency*&);
	/*
This algorithm overloads the + operator and makes sure that two objects of the same type are added only.

Pre: &right
Post: Currency&
return: Currency object temp

	declare Currency object temp
	if(this->noteName==right.noteName)
		temp.coin=coin+right.coin;
		temp.note=note+right.note;
		temp.simplify()
*/
	Currency operator+(Currency&);
	/*
This algorithm overloads the - operator and makes sure that two objects of the same type are added only.

Pre: &right
Post: Currency&
return: Currency object temp

	declare Currency object temp
	if(this->noteName==right.noteName)
		temp.coin=coin-right.coin;
		temp.note=note-right.note;
		temp.simplify()
*/
	Currency operator-(Currency&);
	/*
This algorithm is an operator overloading of the > operator and will also check if they are
	the same type of object.

Pre: &right
Post:Currency&
Return:return true or false.

	bool status=false
	if(this->noteName == right.noteName)
		if(coin>right.coin)
			status=true
		else if(note==right.note && coin>right.coin)
			status=true
		else
			status=false
*/
	bool operator>(Currency&);

	/*
This algorithm is an operator overloading of the < operator and will also check if they are
	the same type of object.

Pre: &right
Post:Currency&
Return:return true or false.

	bool status=false
	if(this->noteName == right.noteName)
		if(coin<right.coin)
			status=true
		else if(note==right.note && coin<right.coin)
			status=true
		else
			status=false
*/
	bool operator<(Currency&);

	/*
This algorithm overloads the >> operator and input checks.

Pre: istream& in, reference to a pointer of Currency object c
Post:istream&, Currency*&, new Dollar/Pound/Yen/Real/
return istream&

	declare coin name+value and note name+value variables
	in>>coinname>>coinvalue>>notename>>notevalue

	repeat:
		if(noteName==Dollar/Pound/Yen/Rupee/Real && coinName==cent,pence,sen,paise,centavo)
			dynamically allocate appropriate object to c and call overloaded constructor
			example:
				c=new Dollar(noteName,noteNum,coinName,coinNum)
*/
	friend std::istream& operator>>(std::istream&, Currency*&);
	/*
This algorithm overloads the << operator

Pre:ostream& out, reference to a pointer to a Currency object
Post:ostream&, Currency*&
return: ostream&

			(virtual)										(virtual)
	out<<c->getnotename<<c->getnotenum<<c->getcoinnum<<c->getcoinname
*/
	friend std::ostream& operator<<(std::ostream&, Currency*&);

};
#endif // !CURRENCY_H
