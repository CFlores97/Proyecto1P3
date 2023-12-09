#include "Trapecio.h"

Trapecio::Trapecio(int a, int b, int c, int h, int B) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->h = h;
	this->B = B;
}

Trapecio::~Trapecio()
{
}

double Trapecio::area() {
	return ((B+b)*h)/2;
}

double Trapecio::perimetro() {
	return B+b+a+c;
}

int Trapecio::getA() {
	return a;
}

int Trapecio::getB() {
	return b;
}

int Trapecio::getC() {
	return c;
}

int Trapecio::getH() {
	return h;
}

int Trapecio::getBMayus() {
	return B;
}

void Trapecio::setA(int a) {
	this->a = a;
}

void Trapecio::setB(int b) {
	this->b = b;
}

void Trapecio::setC(int c) {
	this->c = c;
}

void Trapecio::setH(int h) {
	this->h = h;
}

void Trapecio::setBMayus(int B) {
	this->B = B;
}