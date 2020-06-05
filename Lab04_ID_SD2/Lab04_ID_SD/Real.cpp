#include "Real.h"


Real::Real(std::string noteName, int noteNum, std::string coinName, int coinNum) {
	wholeName = noteName;
	fractionName = coinName;
	wholePart = noteNum;
	fractionPart = coinNum;
}

Real::Real() {
	wholeName = "Real";
	fractionName = "centavo";
	wholePart = 0;
	fractionPart = 0;
}

std::string Real::getWholeName() {
	return wholeName;
}

std::string Real::getFractionName() {
	return fractionName;
}

std::istream& operator>>(std::istream& strm, Real& obj) {
	strm >> obj.wholeName >> obj.wholePart >> obj.fractionPart >> obj.fractionName;
	obj.simplify();
	return strm;
}

std::ostream& operator<<(std::ostream& strm, const Real& obj) {
	strm << obj.wholeName << " " << obj.wholePart << " " << obj.fractionPart << " " << obj.fractionName << std::endl;
	return strm;
}