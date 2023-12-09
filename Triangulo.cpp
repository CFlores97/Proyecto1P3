#include "Triangulo.h"

Triangulo::Triangulo(int a, int b, int c, int h) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->h = h;
}

Triangulo::~Triangulo()
{
}

double Triangulo::area() {
	return (b*h)/2;
}

double Triangulo::perimetro() {
	return a+b+c;
}

int Triangulo::getA() {
	return a;
}

int Triangulo::getB() {
	return b;
}

int Triangulo::getC() {
	return c;
}

int Triangulo::getH() {
	return h;
}

void Triangulo::setA(int a) {
	this->a = a;
}

void Triangulo::setB(int b) {
	this->b = b;
}

void Triangulo::setC(int c)	{
	this->c = c;
}

void Triangulo::setH(int h) {
	this->h = h;
}
