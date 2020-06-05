#pragma once
#ifndef RUPEE_H
#define RUPEE_H
#include "Currency.h"
class Rupee :public Currency {
private:
	std::string wholeName, fractionName;
public:
	/*
this is the overriden virtual getter functions

pre:
post:
return: string noteName/coinName

*/
	std::string getWholeName();
	std::string getFractionName();
	/*
this is default constructor

pre:
post:
return:
	this default constructor intializes 0 values and the appropriate coinName, noteName value
*/
	Rupee();

	/*
	this is the overloaded constructor

	pre: string noteName,coinName / int coinName,coinNum
	post:
	return:
		this constructor intializes parameters to their respecitve variables in the object that was created.
	*/
	Rupee(std::string, int, std::string, int);
	/*
This is the friend function that is overloaded >> for the child class
pre: istream& strm, Dollar& obj
post:
return istream&

	strm>>notename>>notenum>>coinnum>>coinname
*/
	friend std::istream& operator>>(std::istream&, Rupee&);
	/*
This is the friend fucntion that is overloaded << for the child class
pre: istream& strm, const Dollar& obj
post:
return: ostream&

	strm<<notename<<notenum<<coinnum<<coinname;
*/
	friend std::ostream& operator<<(std::ostream&, const Rupee&);
};
#endif // !DOLLAR_H
