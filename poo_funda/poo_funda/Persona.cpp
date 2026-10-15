#include "Persona.h"
#include<string>
Persona::Persona(){
	this->nombre = "";
	this->edad = 0;
	this->id = "";
}

Persona::Persona(string nombre, int edad, string id){
	this->nombre = nombre;
	this->edad = edad;
	this->id = id;
}

void Persona::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Persona::setEdad(int edad)
{
	this->edad = edad;
}

void Persona::setId(string id)
{
	this->id = id;
}

string Persona::getNombre()
{
	return this->nombre;
}

int Persona::getedad()
{
	return this->edad;
}

string Persona::getId()
{
	return this->id;
}

string Persona::tostring()
{
	return "nombre " + this->nombre + "edad "+to_string(this->edad)+
		" cedula "+ this->id;
}

void Persona::perdirDator(){
	string nombre, id;
	int edad;
	cout << "ingrese el nombre" << endl;
	cin >> nombre;
	cout << "ingrese el edad" << endl;
	cin >> edad;
	cout << "ingrese la cedula" << endl;
	cin >> id;
	setNombre(nombre);
	setEdad(edad);
	setId(id);
}
