#include "Currency.h"
#include "Dollar.h"
#include "Pound.h"
#include "Yen.h"
#include "Rupee.h"
#include "Real.h"
#include <cstdlib>

void Currency::simplify() {
	if (fractionPart >= 100) {
		wholePart += (fractionPart / 100);
		fractionPart = fractionPart % 100;
	}
	else if (fractionPart < 0) {
		wholePart -= ((abs(fractionPart) / 100) + 1);
		fractionPart = 100 - (abs(fractionPart) % 100);
	}
	if (wholePart < 0 || fractionPart < 0) throw std::string("No negative values please.");
}


bool Currency::operator>(Currency& right) {
	bool status;
	if (this->getWholeName() == right.getWholeName()) {
		if (wholePart > right.wholePart) {
			status = true;
		}
		else if (wholePart == right.wholePart && fractionPart > right.fractionPart) {
			status = true;
		}
		else {
			status = false;
		}
		return status;
	}
}


bool Currency::operator<(Currency& right) {
	bool status;
	if (this->getWholeName() == right.getWholeName()) {
		if (wholePart < right.wholePart) {
			status = true;
		}
		else if (wholePart == right.wholePart && fractionPart < right.fractionPart) {
			status = true;
		}
		else {
			status = false;
		}
		return status;
	}
}


Currency Currency::operator+(Currency& right) {
	Currency temp;
	if (this->getWholeName() == right.getWholeName()) {
		temp.fractionPart = fractionPart + right.fractionPart;
		temp.wholePart = wholePart + right.wholePart;
		temp.simplify();
	}
	return temp;
}


Currency Currency::operator-(Currency& right) {
	Currency temp;
	if (this->getWholeName() == right.getWholeName()) {
		temp.fractionPart = fractionPart - right.fractionPart;
		temp.wholePart = wholePart - right.wholePart;
		try {
			temp.simplify();
		}
		catch (std::string catcher) {
			temp.fractionPart = fractionPart;
			temp.wholePart = wholePart;
			throw std::string("Error: No negative values. Value restored.");
		}

	}
	return temp;
}


void Currency::operator=(const Currency*& right) {
	fractionPart = right->fractionPart;
	wholePart = right->wholePart;
}



std::istream& operator>>(std::istream& in, Currency*& c) {
	std::string wholeName, fractionName;
	int wholeNum, fractionNum;
	in >> wholeName >> wholeNum >> fractionNum >> fractionName;
	if (wholeName == "Dollar" && fractionName == "cent") {
		c = new Dollar(wholeName, wholeNum, fractionName, fractionNum);
	}
	else if (wholeName == "Pound" && fractionName == "pence") {
		c = new Pound(wholeName, wholeNum, fractionName, fractionNum);
	}
	else if (wholeName == "Yen" && fractionName == "sen") {
		c = new Yen(wholeName, wholeNum, fractionName, fractionNum);
	}
	else if (wholeName == "Rupee" && fractionName == "paise") {
		c = new Rupee(wholeName, wholeNum, fractionName, fractionNum);
	}
	else if (wholeName == "Real" && fractionName == "centavo") {
		c = new Real(wholeName, wholeNum, fractionName, fractionNum);
	}
	else {
		c = new Dollar();
	}
	return in;
}


std::ostream& operator<<(std::ostream& out, Currency*& c) {
	/*if (c->getWholeName() == "Dollar" && c->getFractionName() == "cent") {
		out << c->getWholeName() << " " << c->getWholePart() << " " << c->getFractionPart() << " " << c->getFractionName();
	}
	if (c->getWholeName() == "Pound" && c->getFractionName() == "pence") {
		out << c->getWholeName() << " " << c->getWholePart() << " " << c->getFractionPart() << " " << c->getFractionName();
	}
	if (c->getWholeName() == "Rupee" && c->getFractionName() == "paise") {
		out << c->getWholeName() << " " << c->getWholePart() << " " << c->getFractionPart() << " " << c->getFractionName();
	}
	if (c->getWholeName() == "Yen" && c->getFractionName() == "sen") {
		out << c->getWholeName() << " " << c->getWholePart() << " " << c->getFractionPart() << " " << c->getFractionName();
	}
	if (c->getWholeName() == "Real" && c->getFractionName() == "centavo") {
		out << c->getWholeName() << " " << c->getWholePart() << " " << c->getFractionPart() << " " << c->getFractionName();
	}*/

	out << c->getWholeName() << " " << c->getWholePart() << " " << c->getFractionPart() << " " << c->getFractionName();

	return out;
}


int Currency::getWholePart() {
	return wholePart;
}

int Currency::getFractionPart() {
	return fractionPart;
}


std::string Currency::getWholeName() {
	std::string blank = " ";
	return blank;
}
std::string Currency::getFractionName() {
	std::string blank = " ";
	return blank;
}