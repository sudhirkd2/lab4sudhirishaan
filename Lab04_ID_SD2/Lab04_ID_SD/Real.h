#pragma once
#ifndef REAL_H
#define REAL_H
#include "Currency.h"
class Real :public Currency {
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
	Real();
	/*
this is the overloaded constructor

pre: string noteName,coinName / int coinName,coinNum
post:
return:
	this constructor intializes parameters to their respecitve variables in the object that was created.
*/
	Real(std::string, int, std::string, int);
	/*
This is the friend function that is overloaded >> for the child class
pre: istream& strm, Real& obj
post:istream&, Real&
return istream&

	strm>>notename>>notenum>>coinnum>>coinname
*/
	friend std::istream& operator>>(std::istream&, Real&);
	/*
This is the friend fucntion that is overloaded << for the child class
pre: istream& strm, const Real& obj
post:ostream&, const Real&
return: ostream&

	strm<<notename<<notenum<<coinnum<<coinname;
*/
	friend std::ostream& operator<<(std::ostream&, const Real&);
};
#endif // !DOLLAR_H
