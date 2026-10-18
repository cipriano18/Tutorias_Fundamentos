#pragma once
#include <iostream>
using namespace std;
class Persona{
private:
	string nombre;
	int edad;
	string id;
public:
	Persona();
	Persona(string nombre, int edad, string id);
	void setNombre(string nombre);
	void setEdad(int edad);
	void setId(string id);
	string getNombre();
	int getedad();
	string getId();
	string tostring();

	void perdirDator();
	string mes(int mes);
};

