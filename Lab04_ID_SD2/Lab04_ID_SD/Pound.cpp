#include "Pound.h"


Pound::Pound(std::string noteName, int noteNum, std::string coinName, int coinNum) {
	wholeName = noteName;
	fractionName = coinName;
	wholePart = noteNum;
	fractionPart = coinNum;
}

Pound::Pound() {
	wholeName = "Pound";
	fractionName = "pence";
	wholePart = 0;
	fractionPart = 0;
}

std::string Pound::getWholeName() {
	return wholeName;
}

std::string Pound::getFractionName() {
	return fractionName;
}

std::istream& operator>>(std::istream& strm, Pound& obj) {
	strm >> obj.wholeName >> obj.wholePart >> obj.fractionPart >> obj.fractionName;
	obj.simplify();
	return strm;
}

std::ostream& operator<<(std::ostream& strm, const Pound& obj) {
	strm << obj.wholeName << " " << obj.wholePart << " " << obj.fractionPart << " " << obj.fractionName << std::endl;
	return strm;
}
