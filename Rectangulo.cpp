#include "Rectangulo.h"

Rectangulo::Rectangulo(int a, int b) {
	this->a = a;
	this->b = b;
}

Rectangulo::~Rectangulo()
{
}

double Rectangulo::area() {
	return b * a;
}

double Rectangulo::perimetro() {
	return 2 * (b + a);
}

int Rectangulo::getA() {
	return a;
}

int Rectangulo::getB() {
	return b;
}

void Rectangulo::setA(int a) {
	this->a = a;
}

void Rectangulo::setB(int b) {
	this->b = b;
}