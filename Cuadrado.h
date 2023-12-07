#pragma once
#include "Figura.h"
class Cuadrado : public Figura
{

	int a;
public:

	Cuadrado(int);
	~Cuadrado();

	//polimorfos
	virtual double area() override;
	virtual double perimetro() override;
	virtual void dibujar() override;

	//getters
	int getA();
	

	//setters
	void setA(int);
	
};

