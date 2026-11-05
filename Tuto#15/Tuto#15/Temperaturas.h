#pragma once
#include<iostream>
using namespace std;
class Temperaturas{
private:
	double Temperatura[4][7];
public:
	Temperaturas();
	void registrarTemperaturas();
	void mostrarTemperaturas();
	double promedioCiudad(int ciudad);
	double temperaturaMayor();
	double  ciudadMayorPromedio();
};

