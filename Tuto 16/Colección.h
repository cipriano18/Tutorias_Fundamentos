#pragma once
#include"Equipo.h"
#include<iostream>
#include"string"
class Colección{
private:
	Equipo equipos[36];
	int cantidadregistrados;
	int size;

public:
	Colección();
	int getCantidadRegistrada();
	int getSize();
	bool agregarEquipo(Equipo equipo);
	bool buscarEquipo(string nombre);
	bool actualizarEquipo(string nombre, Equipo equipo);
	bool registrarResultados(string nombre1, int goles1, string nombre2, int goles2);
	void ordenarEquiposBurbuja();
	void cambio(int i, int j);
	string tostring();
	void ganadores3();



};

