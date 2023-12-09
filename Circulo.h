#pragma once
#include "Figura.h"
class Circulo : public Figura{
	int r;
public:
	Circulo(int);
	Circulo();
	~Circulo();

	//polimorfos
	double area();
	double perimetro();
	void dibujar();

	//getters
	int getR();

	//setters
	void setR(int);
};

