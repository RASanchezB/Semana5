#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Figura.h"

class Rectangulo : public Figura{
	private:
		double base, altura;
	public:
		Rectangulo(double,double);
		double getArea();
		double getPerimetro();
		
};
#endif
