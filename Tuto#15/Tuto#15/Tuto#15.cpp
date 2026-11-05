#include <iostream>
#include"Notas.h"
#include"Ventas.h"
#include "Temperaturas.h"
using namespace std;

int main() {

	/*Notas Estudiantes;
	Estudiantes.agregarNota(85);
	Estudiantes.agregarNota(70);
	Estudiantes.agregarNota(95);
	Estudiantes.agregarNota(60);
	Estudiantes.agregarNota(88);
	Estudiantes.mostrarNotas();
	cout << Estudiantes.Promedio() << endl;
	cout << Estudiantes.Notamayor() << endl;;
	cout << Estudiantes.cantidadaprobadas() << endl;;*/
	/*Ventas Producto;
	Producto.registrarVenta(1000);
	Producto.registrarVenta(1600);
	Producto.registrarVenta(900);
	Producto.registrarVenta(500);
	Producto.registrarVenta(1601);
	cout << "Total :" << Producto.calcularTotal() << endl;
	cout << Producto.buscarVenta(1600) << endl;
	cout << Producto.ventaMayor()<<endl;
	Producto.mostrarVentas();*/
	Temperaturas Termostato;
	Termostato.registrarTemperaturas();
	for (int i = 0;i < 4;i++) {
		cout << "Promedio ciudad " << Termostato.promedioCiudad(i) << endl;
	}
	cout << Termostato.temperaturaMayor() << endl;
	cout << Termostato.ciudadMayorPromedio() << endl;





}

