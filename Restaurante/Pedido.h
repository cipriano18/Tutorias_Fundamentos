#pragma once
#include"string"
using namespace std;
class Pedido{
private:
	char tipo;
	int cantidadPlatos;
	int cantidadBebidas;
	string codigo;
public:
	Pedido();
	Pedido(int cantidadPlatos, char tipo, int cantidadBebidas, string codigo);
	void setTipo(char tipo);
	void setCantidadPlatos(int cantidad);
	void setCantidadBebidas(int cantidad);
	void setCodigo(string codigo);
	char getTipo();
	int getCantidadPlatos();
	int getCantidadBebidas();
	string getCodigo();
	double calcularPrecios();
	double descuento();
	string tostring();






};

