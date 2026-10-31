#include "Colección.h"
using namespace std; 
#include<iostream>
Colección::Colección(){
	this->cantidadpedidos = 0;
}

void Colección::setCantidadPedidos(int cantidadPedidos){
	this->cantidadpedidos = cantidadPedidos;
}

int Colección::getCantidadPedido(){
	return cantidadpedidos;
}

void Colección::registrarPedido(Pedido Pedido) {
	if (cantidadpedidos > 50) {
		cout << "Error"<< endl;
	}
	else {
		this->pedidos[cantidadpedidos] = Pedido;
		cantidadpedidos++;
	}
}
void Colección::mostrarPedidos() {
	for (int i = 0;i < cantidadpedidos;i++) {
		cout << "Pedido #" << i+1 << endl;
		cout << this->pedidos[i].tostring() << endl;
		cout << "Precios: " <<endl<< this->pedidos[i].calcularPrecios() << endl;
	}


}
double Colección::totalDescuentosSemanales() {
	double total = 0;
	for (int i = 0; i < cantidadpedidos; i++) {
		total += this->pedidos[i].calcularPrecios() * this->pedidos[i].descuento();
	}

	return total;
}

int Colección::contarDescuentos(){
	int cantidadPedido = 0;
	for (int i = 0;i < cantidadpedidos;i++) {
		if (this->pedidos[i].descuento() > 0.05) {
			cantidadPedido++;
		}
	}
	return cantidadPedido;
}

void Colección::mayorCantidadPlatos(){
	int mayor = 0;
	for (int i = 1; i < cantidadpedidos; i++) {
		if (this->pedidos[i].getCantidadPlatos() >this->pedidos[mayor].getCantidadPlatos()) {

			mayor = i;
		}
	}

	cout << "Pedido con mayor cantidad de platos:" << endl;
	cout << this->pedidos[mayor].tostring() << endl;

}

bool Colección::premieacion(){
	if (contarDescuentos() > 10&&totalDescuentosSemanales()>10000) {
		
		return true;
	}


	return false;

}

void Colección::PedidosRecurrentes(Colección semana1, Colección semana2) {

		bool encontrado = false;

		for (int i = 0; i < semana1.cantidadpedidos; i++) {

			for (int j = 0; j < semana2.cantidadpedidos; j++) {

				if (semana1.pedidos[i].getTipo() == semana2.pedidos[j].getTipo() &&
					semana1.pedidos[i].getCantidadPlatos() == semana2.pedidos[j].getCantidadPlatos() &&
					semana1.pedidos[i].getCantidadBebidas() == semana2.pedidos[j].getCantidadBebidas()) {

					encontrado = true;
				}
			}
		}

		if (encontrado == true) {
			cout << "Existen pedidos recurrentes" << endl;
		}
		else {
			cout << "No existen pedidos recurrentes" << endl;
		}
	}