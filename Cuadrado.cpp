#include "Cuadrado.h"

Cuadrado::Cuadrado(int a) {
	this->a = a;
}

Cuadrado::~Cuadrado()
{
}

double Cuadrado::area() {
	return a*a;
}

double Cuadrado::perimetro() {
	return 4*a;
}

int Cuadrado::getA() {
	return a;
}

void Cuadrado::setA(int a) {
	this->a = a;
}