#pragma once
class trapez
{
public:
	trapez();
	trapez(unsigned int bok1, unsigned int bok2, unsigned int wysokosc);
	~trapez();
	int getpole();
private:
	int bok1, bok2, wysokosc, pole;
};

