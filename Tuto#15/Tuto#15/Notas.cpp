#include "Notas.h"
#include<iostream>
using namespace std;

Notas::Notas(){
	this->cantidadNotas = 0;


};
void Notas::agregarNota(double Nota){
	if (this->cantidadNotas < 10) {
		this->notas[cantidadNotas] = Nota;
		cantidadNotas++;
		}
	else {
		cout << "Vector lleno" << endl;
	}
}
double Notas::Promedio(){
	if (cantidadNotas == 0) {
		return 0.0;
	}
	double suma = 0;
	for (int i = 0;i < cantidadNotas;i++) {
		suma +=notas[i];
	}
	return suma/cantidadNotas;
}
double Notas::Notamayor(){
	if (cantidadNotas == 0) {
		return 0.0;
	}
	double mayor = notas[0];
	for (int i = 1;i < cantidadNotas;i++) {
		if (notas[i] > mayor) {
			mayor = notas[i];
		}
	}
	return mayor;
}
int Notas::cantidadaprobadas(){
	int cantidadaprobadas=0;
	for (int i = 0;i < cantidadNotas;i++) {
		if (notas[i] >= 70) {
			cantidadaprobadas++;
		}
	}
	return cantidadaprobadas;
}

void Notas::mostrarNotas(){
	for (int i = 0;i < cantidadNotas;i++) {
		cout << "Nota [" << i << "] : " << notas[i] << endl;
	}
}
