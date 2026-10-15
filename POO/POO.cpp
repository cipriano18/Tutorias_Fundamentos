#include <iostream>
#include"Curso.h"
#include"Estudiante.h"
using namespace std;

int main(){

	Curso Funda("EIF","Fundamentos");
	Estudiante Estudiante1("Cipriano", 21, "301");
	Estudiante Estudiante2("Antoni", 18, "67");
	Funda.agregarEstudiante(Estudiante1);
	Funda.agregarEstudiante(Estudiante2);
	Funda.motrarEstudiantes();

	









}



