#include "Kolo.h"
#include <iostream>
#define pi 3.14

Kolo::Kolo()
{
	this->r = 0;
	this->p = 0;
	this->ob = 0;
	std::cout << "pole kola wynosi " << p << " a obwod " << ob << std::endl;
}
Kolo::Kolo(unsigned int promien)
{
	this->r = promien;
	this->p = r * pi * r;
	this->ob = 2 * pi * r;
	std::cout << "pole kola wynosi " << p << " a obwod " << ob << std::endl;
}
Kolo::~Kolo()
{
	
}
float Kolo::getpole()
{
	return p;
}

