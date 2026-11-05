#include "Ventas.h"
#include<iostream>
using namespace std;
Ventas::Ventas(){
	this->cantidadRegistradas = 0;
}

void Ventas::registrarVenta(double monto){
	if (this->cantidadRegistradas < 10) {
		this->Venta[cantidadRegistradas] = monto;
		cantidadRegistradas++;
	}
	else {
		cout << "Vector lleno" << endl;
	}
}
double Ventas::calcularTotal(){
	double total = 0.0;
	for (int i = 0;i < cantidadRegistradas;i++) {
		total += Venta[i];
	}
	return total;
}

double Ventas::ventaMayor(){
	if (cantidadRegistradas == 0) {
		cout << "Vector vacío" << endl;
	}
	double mayor = Venta[0];
	for (int i = 1;i < cantidadRegistradas;i++) {
		if (Venta[i] > mayor) {
			mayor = Venta[i];
		}
	}
	return mayor;
}

bool Ventas::buscarVenta(double monto){
	for (int i = 0;i < cantidadRegistradas;i++){
		if (Venta[i] == monto) {
			return true;
		}
	}
	return false;
}

void Ventas::mostrarVentas(){
	for (int i = 1;i < cantidadRegistradas;i++) {
		cout << "Venta [" << i << "]: " << Venta[i] << endl;
	}
}
