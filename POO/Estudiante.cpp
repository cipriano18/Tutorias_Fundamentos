#include "Estudiante.h"
#include<iostream>
using namespace std;
Estudiante::Estudiante(){
	this->edad = 0;
	this->carnet = "";
	this->nombre = "";

}

Estudiante::Estudiante(string nombre, int edad, string carnet){
	this->edad = edad;
	this->carnet = carnet;
	this->nombre = nombre;
}

void Estudiante::setnombre(string nombre){
	this->nombre = nombre;

}

void Estudiante::setedad(int edad){
	this->edad = edad;
}

void Estudiante::setidentificacion(string carnet){
	this->carnet = carnet;
}

string Estudiante::getnombre(){




	return nombre;
}

int Estudiante::getedad()
{
	return edad;
}

string Estudiante::getidentificacion()
{
	return carnet;
}

string Estudiante::tostring()
{
	return "nombre "+this->nombre+" carnet "+this->carnet+" edad "+to_string(edad);
}
