#pragma once
#include"Pedido.h"
class Colección{
private:
	Pedido pedidos[50];
	int cantidadpedidos;
public:
	Colección();
	void registrarPedido(Pedido Pedidos);
	void setCantidadPedidos(int cantidadPedidos);
	int getCantidadPedido();
	void mostrarPedidos();
	double totalDescuentosSemanales();
	int contarDescuentos();
	void mayorCantidadPlatos();
	bool premieacion();
	void PedidosRecurrentes(Colección semana1, Colección semana2);








};

