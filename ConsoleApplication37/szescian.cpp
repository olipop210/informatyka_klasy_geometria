#include "szescian.h"
#include <iostream>

szescian::szescian()
{
	this->bok1 = 0;
	this->pole = 0;
	this->objetosc = 0;
	std::cout << "pole szescianu wynosi " << pole << " a objetosc " << objetosc << std::endl;
}
szescian::szescian(unsigned int bok1)
{
	this->bok1 = bok1;
	this->pole = bok1 * bok1 * 6;
	this->objetosc = bok1 * bok1 * bok1;
	std::cout << "pole szescianu wynosi " << pole << " a objetosc " << objetosc << std::endl;
}
szescian::~szescian()
{

}
int szescian::getobjetosc()
{
	return objetosc;
}