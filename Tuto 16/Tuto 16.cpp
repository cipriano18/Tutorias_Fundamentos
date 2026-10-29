#include <iostream>
#include"Colección.h"
#include"Equipo.h"
#include"string"
using namespace std;

int main(){
	Colección Torneo;
	Equipo equipo1;
	Equipo equipo2;
	Equipo equipo3;
	equipo1.setNombre("Barca");
	equipo2.setNombre("Madrid");
	equipo3.setNombre("Juventus");
	Torneo.agregarEquipo(equipo1);
	Torneo.agregarEquipo(equipo2);
	Torneo.agregarEquipo(equipo3);
	Torneo.buscarEquipo("Barca");
	Torneo.registrarResultados("Madrid", 2, "Barca", 0);
	Torneo.cambio(2, 3);
	cout << Torneo.tostring() << endl;;
	Torneo.ordenarEquiposBurbuja();
	cout << Torneo.tostring();
	Torneo.ganadores3();
	return 0;
}


