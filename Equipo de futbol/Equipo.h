#pragma once
#include"string"
#include<iostream>
using namespace std;
class Equipo {

private:
	string nombre;
	int puntos;
	int partidosganado;
	int partidosperdido;
	int partidosempatado;
	int Golesrecibidos;
	int Golesanotados;
public:
	Equipo();
	Equipo(string nombre, int puntos, int partidosganado, int partidosperdido, int partidosempatado, int Golesrecibidos, int Golesanotados);

	// Get y Set de nombre
	string getNombre();
	void setNombre(string nombre);

	// Get y Set de puntos
	int getPuntos();
	void setPuntos(int puntos);

	// Get y Set de partidos ganados
	int getPartidosGanado();
	void setPartidosGanado(int partidosganado);

	// Get y Set de partidos perdidos
	int getPartidosPerdido();
	void setPartidosPerdido(int partidosperdido);

	// Get y Set de partidos empatados
	int getPartidosEmpatado();
	void setPartidosEmpatado(int partidosempatado);

	// Get y Set de goles recibidos
	int getGolesRecibidos();
	void setGolesRecibidos(int golesrecibidos);

	// Get y Set de goles anotados
	int getGolesAnotados();
	void setGolesAnotados(int golesanotados);
	//mostrar
	string tostring();







};

