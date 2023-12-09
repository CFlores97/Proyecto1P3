#include "Circulo.h"
#include <cmath>
#include <iomanip>

Circulo::Circulo(int r) {
	this->r = r;
}

Circulo::Circulo()
{
}

Circulo::~Circulo()
{
}

double Circulo::area() {
	return 3.1416*(r*r);
}

double Circulo::perimetro() {
	return 2 * 3.1416 * r;
}

int Circulo::getR() {
	return r;
}

void Circulo::setR(int r) {
	this->r = r;
}
