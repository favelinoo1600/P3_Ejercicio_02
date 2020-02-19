#include <iostream>
#include "Punto.h"
#include "Rectangulo.h"

using std::cout;
using std::endl;

int main(){
	Rectangulo miRectangulo;
	miRectangulo.AsignarSupIzq(1,5);	
	miRectangulo.AsignarSupDer(7,5);
	miRectangulo.AsignarInfIzq(1,1);
	miRectangulo.AsignarInfDer(7,1);
	miRectangulo.ConfirmarDim();
	cout << "El perimetro del rectangulo es: " << miRectangulo.Perimetro() << endl;
	cout << "El area del rectangulo es: " << miRectangulo.Area() << endl;
}
