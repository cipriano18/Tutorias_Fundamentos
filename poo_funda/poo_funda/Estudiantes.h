#pragma once
#include <iostream>
using namespace std;
class Estudiantes{
	//atributos de la clase
private:
	string nombre;
	int edad;
public:
	//contructor sin parametros
	Estudiantes(); //nombre = " "
	//constructor con parametros
	Estudiantes(string nombre, int edad);//nombre=sebas
	//metodos get y set
	void setNombre(string nombre);
	void setEdad(int edad);
	string getNombre();
	int getEdad();
	//metodo para mostrar
	string tostring();

	//bool 
	bool esMayoredad();
};