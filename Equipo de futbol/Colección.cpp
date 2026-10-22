#include "Colección.h"

Colección::Colección()
{
	this->cantidadregistrado = 0;
	this->size = 36;
}
int Colección::getCantidadRegistrada() {
	return cantidadregistrado;
}
int Colección::getSize() {
	return size;
}
bool Colección::agregarEquipo(Equipo equipo) {
	if (this->cantidadregistrado >= this->size) {
		return false;
}
	if (buscarEquipo(equipo.getNombre()) == true) {
		return false;
	}
	this->equipos[cantidadregistrado] = equipo;
	this->cantidadregistrado++;

}
bool Colección::buscarEquipo(string nombre) {
	for (int i = 0;i < this->cantidadregistrado;i++) {
		
		if (nombre == this->equipos[i].getNombre()) {
			return true;
		}


	}


	return false;
}
bool Colección::actualizarEquipo(string nombre, Equipo equipo) {
	if (buscarEquipo(equipo.getNombre()) == true){
		return false;
	}
	for (int i = 0;i < this->cantidadregistrado;i++) {

		if (nombre == this->equipos[i].getNombre()) {
			this->equipos[i] = equipo;
			return true;
		}

	}

	return false;

}