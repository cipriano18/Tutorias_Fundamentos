#include <iostream>
#include "Pedido.h"
#include "Colección.h"
using namespace std;


int main(){
	Pedido Pedido1;
	Pedido Pedido2;
	Pedido2.setCodigo("67");
	Pedido2.setTipo('D');
	Pedido2.setCantidadPlatos(10);
	Pedido1.setTipo('D');
	Pedido1.setCantidadPlatos(10);
	Pedido1.setCodigo("1234");
	//cout << descuentoP.calcularPrecios();
	Pedido1.generarFactura();
	Colección Factura, Factura2;
	Factura.registrarPedido(Pedido1);
	Factura2.registrarPedido(Pedido2);
	Factura.mayorCantidadPlatos();
	Factura.PedidosRecurrentes(Factura,Factura2);


}


