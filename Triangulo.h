#pragma once
#include "Figura.h"
class Triangulo : public Figura
{
	int a, b, c, h;

public:
	Triangulo(int, int, int, int);
	~Triangulo();

	//polimorfos
	virtual double area() override;
	virtual double perimetro() override;
	virtual void dibujar() override;

	//getters
	int getA();
	int getB();
	int getC();
	int getH();

	//setters
	void setA(int);
	void setB(int);
	void setC(int);
	void setH(int);
};

