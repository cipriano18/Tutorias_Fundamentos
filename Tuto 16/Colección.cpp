#include "Colección.h"
#include"string"
Colección::Colección()
{
	this->cantidadregistrados = 0;
	this->size = 36;
}
int Colección::getCantidadRegistrada() {
	return cantidadregistrados;
}
int Colección::getSize() {
	return size;
}
bool Colección::agregarEquipo(Equipo equipo) {
	if (this->cantidadregistrados >= this->size) {
		return false;
}
	if (buscarEquipo(equipo.getNombre()) == true) {
		cout << "El equipo ya existe" << endl;
		return false;
	}
	cout << "Equipo registrado" << endl;
	this->equipos[cantidadregistrados] = equipo;
	this->cantidadregistrados++;

}
bool Colección::buscarEquipo(string nombre) {
	for (int i = 0;i < this->cantidadregistrados;i++) {
		
		if (nombre == this->equipos[i].getNombre()) {
			cout << equipos[i].getNombre() << endl;
			return true;

		}
		

	}


	return false;
}
bool Colección::actualizarEquipo(string nombre, Equipo equipo) {
	if (buscarEquipo(equipo.getNombre()) == true){
		return false;
	}
	for (int i = 0;i < this->cantidadregistrados;i++) {

		if (nombre == this->equipos[i].getNombre()) {
			this->equipos[i] = equipo;
			cout << "Equipo  actualizado" << endl;
			return true;
		}

	}

	return false;

}
bool Colección::registrarResultados(string nombre1, int goles1, string nombre2, int goles2) {

    if (goles1 < 0 || goles2 < 0) {
        cout << "Goles invalidos" << endl;
        return false;
    }

    int posicion1 = -1;
    int posicion2 = -1;

    // Buscar los equipos
    for (int i = 0; i < cantidadregistrados; i++) {

        if (equipos[i].getNombre() == nombre1) {
            posicion1 = i;
        }

        if (equipos[i].getNombre() == nombre2) {
            posicion2 = i;
        }
    }

    // Validar las posiciones
    if (posicion1 == -1) {
        cout << "No se encontro el equipo: " << nombre1 << endl;
        return false;
    }

    if (posicion2 == -1) {
        cout << "No se encontro el equipo: " << nombre2 << endl;
        return false;
    }

    if (posicion1 == posicion2) {
        cout << "No se puede registrar un partido entre el mismo equipo" << endl;
        return false;
    }

    // Registrar goles de ambos equipos
    equipos[posicion1].setGolesAnotados(
        equipos[posicion1].getGolesAnotados() + goles1);

    equipos[posicion1].setGolesRecibidos(
        equipos[posicion1].getGolesRecibidos() + goles2);

    equipos[posicion2].setGolesAnotados(
        equipos[posicion2].getGolesAnotados() + goles2);

    equipos[posicion2].setGolesRecibidos(
        equipos[posicion2].getGolesRecibidos() + goles1);

    // Determinar el resultado
    if (goles1 > goles2) {

        equipos[posicion1].setPartidosGanado(
            equipos[posicion1].getPartidosGanado() + 1);

        equipos[posicion2].setPartidosPerdido(
            equipos[posicion2].getPartidosPerdido() + 1);

        equipos[posicion1].setPuntos(
            equipos[posicion1].getPuntos() + 3);

    }
    else if (goles2 > goles1) {

        equipos[posicion2].setPartidosGanado(
            equipos[posicion2].getPartidosGanado() + 1);

        equipos[posicion1].setPartidosPerdido(
            equipos[posicion1].getPartidosPerdido() + 1);

        equipos[posicion2].setPuntos(
            equipos[posicion2].getPuntos() + 3);

    }
    else {

        equipos[posicion1].setPuntos(
            equipos[posicion1].getPuntos() + 1);

        equipos[posicion2].setPuntos(
            equipos[posicion2].getPuntos() + 1);

        equipos[posicion1].setPartidosEmpatado(
            equipos[posicion1].getPartidosEmpatado() + 1);

        equipos[posicion2].setPartidosEmpatado(
            equipos[posicion2].getPartidosEmpatado() + 1);
    }

    cout << "Resultados registrados correctamente" << endl;

    return true;
}
void Colección::ordenarEquiposBurbuja() {
    Equipo aux;
    for (int i = 0;i < cantidadregistrados;i++) {
        for (int j = 0;j < cantidadregistrados - 1;j++) {
            if (this->equipos[j].getPuntos() < this->equipos[j + 1].getPuntos()) {

                aux = equipos[j];
                equipos[j] = equipos[j + 1];
                equipos[j + 1] = aux;



            }
      }


    }




}

void Colección::cambio(int i, int j){
    //si i=2 y j=3 y yo quiero cambiar los valores ejemplo i=3 y j=2
    int aux;
    aux = i;
    i = j;
    j = aux;
    cout << i << " " << j << endl;
}
string Colección::tostring() {
    string texto = "";

    for (int i = 0;i < cantidadregistrados;i++) {

        texto+=this->equipos[i].tostring();






    }
    return texto;
}

void Colección::ganadores3(){
    ordenarEquiposBurbuja();

    if (cantidadregistrados >= 3) {
        for (int i = 0;i < 3;i++) {
            cout << equipos[i].tostring();
        }
        
    }
    else {
        cout << "Equipos insufucientes" << endl;

    }

}
