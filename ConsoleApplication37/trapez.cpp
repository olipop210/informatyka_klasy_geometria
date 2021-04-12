#include "trapez.h"
#include <iostream>
trapez::trapez()
{
	this->bok1 = 0;
	this->bok2 = 0;
	this->wysokosc = 0;
	this->pole = 0;
	std::cout << "pole trapeza wynosi " << pole << std::endl;
}
trapez::trapez(unsigned int bok1, unsigned int bok2, unsigned int wysokosc)
{
	this->bok1 = bok1;
	this->bok2 = bok2;
	this->wysokosc = wysokosc;
	this->pole = ((bok1 + bok2) * wysokosc) / 2;
	std::cout << "pole trapeza wynosi " << pole << std::endl;
}
trapez::~trapez()
{

}
int trapez::getpole()
{
	return pole;
}