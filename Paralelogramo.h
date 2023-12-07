#pragma once
#include "Figura.h"
class Paralelogramo : public Figura
{
	int a, b, h;

public:
	Paralelogramo(int, int, int);
	~Paralelogramo();

	//polimorfos
	virtual double area() override;
	virtual double perimetro() override;
	virtual void dibujar() override;

	//getters
	int getA();
	int getB();
	int getH();

	//setters
	void setA(int);
	void setB(int);
	void setH(int);
};

