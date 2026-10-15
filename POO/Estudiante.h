#pragma once
#include<string>
using namespace std;
class Estudiante{
private:
	int edad;
	string nombre;
	string carnet;

public:
	Estudiante();
	Estudiante(string nombre, int edad, string carnet);
	void setnombre(string nombre);
		void setedad(int edad);
		void setidentificacion(string carnet);
		string getnombre();
		int getedad();
		string getidentificacion();
		string tostring();






};

