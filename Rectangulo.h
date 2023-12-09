#pragma once
#include "Figura.h"
class Rectangulo : public Figura
{
	int a,  b;
public:
	Rectangulo(int, int);
	~Rectangulo();

	//polimorfos
	double area() override;
	virtual double perimetro() override;
	virtual void dibujar() override;

	//getters
	int getA();
	int getB();

	//setters
	void setA(int);
	void setB(int);

};

