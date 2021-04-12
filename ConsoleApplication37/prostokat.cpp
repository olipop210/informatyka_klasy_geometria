#include "prostokat.h"
#include <iostream>

prostokat::prostokat()
{
	this->bok1 = 0;
	this->bok1 = 0;
	this->pole = 0;
	this->obwod = 0;
	std::cout << "pole kola wynosi " << pole << " a obwod " << obwod << std::endl;
}
prostokat::prostokat(unsigned int bok1, unsigned int bok2)
{
	this->bok1 = bok1;
	this->bok2 = bok2;
	this->pole = bok2 * bok1;
	this->obwod = 2 * bok1 + 2 * bok2;
	std::cout << "pole kola wynosi " << pole << " a obwod " << obwod << std::endl;
}
prostokat::~prostokat()
{

}
int prostokat::getpole()
{
	return pole;
}
