#include "Dollar.h"

Dollar::Dollar(std::string noteName, int noteNum, std::string coinName, int coinNum) {
	wholeName = noteName;
	fractionName = coinName;
	wholePart = noteNum;
	fractionPart = coinNum;
}


Dollar::Dollar() {
	wholeName = "Dollar";
	fractionName = "cent";
	wholePart = 0;
	fractionPart = 0;
}



std::string Dollar::getWholeName() {
	return wholeName;
}

std::string Dollar::getFractionName() {
	return fractionName;
}



std::istream& operator>>(std::istream& strm, Dollar& obj) {
	strm >> obj.wholeName >> obj.wholePart >> obj.fractionPart >> obj.fractionName;
	obj.simplify();
	return strm;
}


std::ostream& operator<<(std::ostream& strm, const Dollar& obj) {
	strm << obj.wholeName << " " << obj.wholePart << " " << obj.fractionPart << " " << obj.fractionName << std::endl;
	return strm;
}