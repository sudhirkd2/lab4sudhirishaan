#pragma once
#ifndef YEN_H
#define YEN_H
#include "Currency.h"
class Yen :public Currency {
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
	Yen();
	/*
this is the overloaded constructor

pre: string noteName,coinName / int coinName,coinNum
post:
return:
	this constructor intializes parameters to their respecitve variables in the object that was created.
*/
	Yen(std::string, int, std::string, int);
	/*
This is the friend function that is overloaded >> for the child class
pre: istream& strm, Yen& obj
post:
return istream&

	strm>>notename>>notenum>>coinnum>>coinname
*/
	friend std::istream& operator>>(std::istream&, Yen&);
	/*
This is the friend fucntion that is overloaded << for the child class
pre: istream& strm, const Yen& obj
post:istream, Yen&
return: ostream&

	strm<<notename<<notenum<<coinnum<<coinname;
*/
	friend std::ostream& operator<<(std::ostream&, const Yen&);
};
#endif // !ENDIF
