#include "Rombo.h"

Rombo::Rombo(int a, int d, int D) {
	this->a = a;
	this->d = d;
	this->D = D;
}

Rombo::~Rombo()
{
}

double Rombo::area() {
	return (D*d)/2;
}

double Rombo::perimetro() {
	return 4*a;
}

int Rombo::getA() {
	return a;
}

int Rombo::getD() {
	return d;
}

int Rombo::getDMayus() {
	return D;
}

void Rombo::setA(int a) {
	this->a = a;
}

void Rombo::setD(int d) {
	this->d = d;
}

void Rombo::setDMayus(int D) {
	this->D = D;
}
