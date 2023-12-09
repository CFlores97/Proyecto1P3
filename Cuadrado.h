#pragma once
#include "Figura.h"
class Cuadrado : public Figura
{

	int a;
public:

	Cuadrado(int);
	~Cuadrado();

	//polimorfos
	double area() override;
	double perimetro() override;
	virtual void dibujar() override;

	//getters
	int getA();
	

	//setters
	void setA(int);
	
};

