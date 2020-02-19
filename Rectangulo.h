#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <iostream>
#include <math.h>
#include "Punto.h"

using namespace std;

class Rectangulo{
private:
	Punto superiorIzquierdo;
	Punto superiorDerecho;
	Punto inferiorIzquierdo;
	Punto inferiorDerecho;
public:
	Rectangulo(){
	cout << "Se ha creado un rectangulo" << endl;
}

void AsignarSupIzq(float x, float y){
	superiorIzquierdo.asignarX( x);
	superiorIzquierdo.asignarY( y);
}

void AsignarSupDer(float x, float y){
	superiorDerecho.asignarX( x);
	superiorDerecho.asignarY( y);
}

void AsignarInfIzq(float x, float y){
	inferiorIzquierdo.asignarX( x);
	inferiorIzquierdo.asignarY( y);
}

void AsignarInfDer(float x, float y){
	inferiorDerecho.asignarX(x);
	inferiorDerecho.asignarY(y);
}

	ConfirmarDim(){
	float base1 = abs(inferiorDerecho.obtenerX() - inferiorIzquierdo.obtenerX());
	float base2 = abs(superiorDerecho.obtenerX() - superiorIzquierdo.obtenerX());
	float altura1 = abs(inferiorDerecho.obtenerY() - superiorDerecho.obtenerY());
	float altura2 = abs(inferiorIzquierdo.obtenerY() - superiorIzquierdo.obtenerY());
	if (base1 == base2 && altura1 == altura2){
		cout << "Es un rectangulo."<<endl;
	} else {
		cout << "No es un rectangulo" <<endl;
	}
}

float Perimetro(){
	float base = abs(inferiorDerecho.obtenerX() - inferiorIzquierdo.obtenerX());
	float altura = abs(inferiorDerecho.obtenerY() - superiorIzquierdo.obtenerY());
	return (base*2) + (altura*2);
}

float Area(){
	float base = abs(inferiorDerecho.obtenerX() - inferiorIzquierdo.obtenerX());
	float altura = abs(inferiorDerecho.obtenerY() - superiorIzquierdo.obtenerY());
	return (base*altura);
}
};

#endif
