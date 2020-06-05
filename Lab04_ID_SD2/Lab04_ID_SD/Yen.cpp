#include "Yen.h"


Yen::Yen(std::string noteName, int noteNum, std::string coinName, int coinNum) {
	wholeName = noteName;
	fractionName = coinName;
	wholePart = noteNum;
	fractionPart = coinNum;
}

Yen::Yen() {
	wholeName = "Yen";
	fractionName = "sen";
	wholePart = 0;
	fractionPart = 0;
}

std::string Yen::getWholeName() {
	return wholeName;
}

std::string Yen::getFractionName() {
	return fractionName;
}

std::istream& operator>>(std::istream& strm, Yen& obj) {
	strm >> obj.wholeName >> obj.wholePart >> obj.fractionPart >> obj.fractionName;
	obj.simplify();
	return strm;
}

std::ostream& operator<<(std::ostream& strm, const Yen& obj) {
	strm << obj.wholeName << " " << obj.wholePart << " " << obj.fractionPart << " " << obj.fractionName << std::endl;
	return strm;
}