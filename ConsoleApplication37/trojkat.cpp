#include "trojkat.h"
#include <iostream>
trojkat::trojkat()
{
	this->bok1 = 0;
	this->wysokosc = 0;
	this->pole = 0;
	std::cout << "pole trojkota wynosi " << pole << std::endl;
}
trojkat::trojkat(unsigned int bok1, unsigned int wysokosc)
{
	this->bok1 = bok1;
	this->wysokosc = wysokosc;
	this->pole = bok1 * wysokosc / 2;
	std::cout << "pole trojkota wynosi " << pole << std::endl;
}
trojkat::~trojkat()
{

}
int trojkat::getpole()
{
	return pole;
}
