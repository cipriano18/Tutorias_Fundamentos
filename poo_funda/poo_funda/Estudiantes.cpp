#include "Estudiantes.h"
#include <string>
Estudiantes::Estudiantes(){
	this->nombre = "";
	this->edad = 0;
}

Estudiantes::Estudiantes(string nombre, int edad){//cipriano antoni sebas
	this->nombre = nombre;
	this->edad = edad;
}

void Estudiantes::setNombre(string nombre){
	this->nombre = nombre;
}

void Estudiantes::setEdad(int edad)
{
	if (edad < 0) {

	}
	else
	{
		this->edad = edad;
	}
	
}

string Estudiantes::getNombre()
{
	return this->nombre;
}

int Estudiantes::getEdad()
{
	return this->edad;
}

string Estudiantes::tostring() {
	return "nombre " + this->nombre + " edad " + to_string(edad);
}

bool Estudiantes::esMayoredad() {
	if (this->edad >= 18) {
		return true;
	}
	else {
		return false;
	}
}
