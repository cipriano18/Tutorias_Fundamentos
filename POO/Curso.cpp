#include "Curso.h"
#include<iostream>
using namespace std;
Curso::Curso(){
	this->nombre = "";
	this->nrc = "";
	this->cantidad = 0;
}

Curso::Curso(string nrc, string nombre){
	this->nombre = nombre;
	this->nrc = nrc;
	this->cantidad = 0;



}

void Curso::agregarEstudiante(Estudiante estudiante){
	if (cantidad < 10) {
		Estudiantes[cantidad] = estudiante;
		cantidad++;
	}
	else {
		cout << "Curso lleno "<< endl;
	}


}

void Curso::motrarEstudiantes(){
	for (int i = 0;i < cantidad;i++) {
		cout << "Estudiante: " << Estudiantes[i].tostring()<< endl;
	}


}

int Curso::cantidadEstudiantes(){





	return cantidad;
}
