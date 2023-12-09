#pragma once
#include "Figura.h"
class Trapecio : public Figura
{
	int a, b, c, h, B;

public:
	Trapecio(int, int, int, int, int);
	~Trapecio();

	//polimorfos
	double area() override;
	double perimetro() override;
	virtual void dibujar() override;

	//getters
	int getA();
	int getB();
	int getC();
	int getH();
	int getBMayus();

	//setters
	void setA(int);
	void setB(int);
	void setC(int);
	void setH(int);
	void setBMayus(int);
};

