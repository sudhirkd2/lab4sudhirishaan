#include "Rupee.h"

Rupee::Rupee(std::string noteName, int noteNum, std::string coinName, int coinNum) {
	wholeName = noteName;
	fractionName = coinName;
	wholePart = noteNum;
	fractionPart = coinNum;
}

Rupee::Rupee() {
	wholeName = "Rupee";
	fractionName = "paise";
	wholePart = 0;
	fractionPart = 0;
}

std::string Rupee::getWholeName() {
	return wholeName;
}

std::string Rupee::getFractionName() {
	return fractionName;
}

std::istream& operator>>(std::istream& strm, Rupee& obj) {
	strm >> obj.wholeName >> obj.wholePart >> obj.fractionPart >> obj.fractionName;
	obj.simplify();
	return strm;
}

std::ostream& operator<<(std::ostream& strm, const Rupee& obj) {
	strm << obj.wholeName << " " << obj.wholePart << " " << obj.fractionPart << " " << obj.fractionName << std::endl;
	return strm;
}