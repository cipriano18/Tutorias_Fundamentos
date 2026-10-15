#pragma once
#include"Estudiante.h"
#include<string>
using namespace std;
class Curso{
private:
	string nrc;
	string nombre;
	Estudiante Estudiantes[10];
	int cantidad;

public:
	Curso();
	Curso(string nrc, string nombre);
	void agregarEstudiante(Estudiante estudiante);
	void motrarEstudiantes();
	int cantidadEstudiantes();





};

