#pragma once
using namespace std;
class Notas{
private:
	double notas[10];
	int cantidadNotas;
public:
	Notas();
	void agregarNota(double Nota);
	double Promedio();
	double Notamayor();
	int cantidadaprobadas();
	void mostrarNotas();







};

