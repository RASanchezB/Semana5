#include "Figura.h"
#include "Rectangulo.h"
#include <iostream>
#include <vector>

using namespace std;

int main(){
	Figura* figura = new Rectangulo(10,5);
	cout<<"El area es: "<<figura->getArea()<<endl;
	cout<<"El perimetro es: "<<figura->getPerimetro()<<endl;
	delete figura;
	return 0;
}
