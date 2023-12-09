#include "Cometa.h"

Cometa::Cometa(int a, int b, int d, int D) {
	this->a = a;
	this->b = b;
	this->d = d;
	this->D = D;
}

Cometa::~Cometa()
{
}

double Cometa::area() {
	return (D*d)/2;
}

double Cometa::perimetro() {
	return 2*(b+a);
}

int Cometa::getA() {
	return a;
}

int Cometa::getB() {
	return b;
}

int Cometa::getD() {
	return d;
}

int Cometa::getDMayus() {
	return D;
}

void Cometa::setA(int a) {
	this->a = a;
}

void Cometa::setB(int b) {
	this->b = b;
}

void Cometa::setD(int d) {
	this->d = d;
}

void Cometa::setDMayus(int D) {
	this->D = D;
}