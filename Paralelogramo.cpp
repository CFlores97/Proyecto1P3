#include "Paralelogramo.h"

Paralelogramo::Paralelogramo(int a, int b, int h) {
	this->a = a;
	this->b = b;	
	this->h = h;
}

Paralelogramo::~Paralelogramo()
{
}

double Paralelogramo::area() {
	return b*h;
}

double Paralelogramo::perimetro() {
	return 2*(a+b);
}

int Paralelogramo::getA() {
	return a;
}

int Paralelogramo::getB() {
	return b;
}

int Paralelogramo::getH() {
	return h;
}

void Paralelogramo::setA(int a) {
	this->a = a;
}

void Paralelogramo::setB(int b) {
	this->b = b;
}

void Paralelogramo::setH(int h) {
	this->h = h;
}