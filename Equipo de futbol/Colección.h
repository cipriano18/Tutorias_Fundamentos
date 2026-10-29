#pragma once
#include"Equipo.h"
#include<iostream>
#include"string"
class Colección{
private:
	Equipo equipos[36];
	int cantidadregistrado;
	int size;

public:
	Colección();
	int getCantidadRegistrada();
	int getSize();
	bool agregarEquipo(Equipo equipo);
	bool buscarEquipo(string nombre);
	bool actualizarEquipo(string nombre, Equipo equipo);






};

