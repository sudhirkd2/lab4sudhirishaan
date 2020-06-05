#pragma once
#ifndef POUND_H
#define POUND_H
#include "Currency.h"
class Pound :public Currency{
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
	Pound();
	/*
this is the overloaded constructor

pre: string noteName,coinName / int coinName,coinNum
post:
return:
	this constructor intializes parameters to their respecitve variables in the object that was created.
*/
	Pound(std::string, int, std::string, int);
	/*
This is the friend function that is overloaded >> for the child class
pre: istream& strm, Pound& obj
post:istream&, Pound&
return istream&

	strm>>notename>>notenum>>coinnum>>coinname
*/
	friend std::istream& operator>>(std::istream&, Pound&);
	/*
This is the friend fucntion that is overloaded << for the child class
pre: istream& strm, const Pound& obj
post:ostream&, const 
return: ostream&

	strm<<notename<<notenum<<coinnum<<coinname;
*/
	friend std::ostream& operator<<(std::ostream&, const Pound&);
};
#endif // !POUND_H
