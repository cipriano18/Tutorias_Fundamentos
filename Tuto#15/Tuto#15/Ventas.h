#pragma once
class Ventas{
private:
	int Venta[10];
	int cantidadRegistradas;
public:
	Ventas();
	void registrarVenta(double monto);
	double calcularTotal();
	double ventaMayor();
	bool buscarVenta(double monto);
	void mostrarVentas();

};

