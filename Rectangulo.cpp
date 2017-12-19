#include "Rectangulo.h"

Rectangulo::Rectangulo(double pBase, double pAltura){
	base = pBase;
	altura = pAltura;
}
double Rectangulo::getArea(){
	return base*altura;
}
double Rectangulo::getPerimetro(){
	return 2*base + 2*altura;
}
