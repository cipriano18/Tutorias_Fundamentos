#include "Equipo.h"

// Constructor vacío
Equipo::Equipo() {
    nombre = "";
    puntos = 0;
    partidosganado = 0;
    partidosperdido = 0;
    partidosempatado = 0;
    Golesrecibidos = 0;
    Golesanotados = 0;
}

// Constructor con parámetros
Equipo::Equipo(string nombre, int puntos, int partidosganado,
    int partidosperdido, int partidosempatado,
    int Golesrecibidos, int Golesanotados) {

    this->nombre = nombre;
    this->puntos = puntos;
    this->partidosganado = partidosganado;
    this->partidosperdido = partidosperdido;
    this->partidosempatado = partidosempatado;
    this->Golesrecibidos = Golesrecibidos;
    this->Golesanotados = Golesanotados;
}

// Get y Set de nombre
string Equipo::getNombre() {
    return nombre;
}

void Equipo::setNombre(string nombre) {
    this->nombre = nombre;
}

// Get y Set de puntos
int Equipo::getPuntos() {
    return puntos;
}

void Equipo::setPuntos(int puntos) {
    this->puntos = puntos;
}

// Get y Set de partidos ganados
int Equipo::getPartidosGanado() {
    return partidosganado;
}

void Equipo::setPartidosGanado(int partidosganado) {
    this->partidosganado = partidosganado;
}

// Get y Set de partidos perdidos
int Equipo::getPartidosPerdido() {
    return partidosperdido;
}

void Equipo::setPartidosPerdido(int partidosperdido) {
    this->partidosperdido = partidosperdido;
}

// Get y Set de partidos empatados
int Equipo::getPartidosEmpatado() {
    return partidosempatado;
}

void Equipo::setPartidosEmpatado(int partidosempatado) {
    this->partidosempatado = partidosempatado;
}

// Get y Set de goles recibidos
int Equipo::getGolesRecibidos() {
    return Golesrecibidos;
}

void Equipo::setGolesRecibidos(int Golesrecibidos) {
    this->Golesrecibidos = Golesrecibidos;
}

// Get y Set de goles anotados
int Equipo::getGolesAnotados() {
    return Golesanotados;
}

void Equipo::setGolesAnotados(int Golesanotados) {
    this->Golesanotados = Golesanotados;
}

// Mostrar información del equipo
string Equipo::tostring() {
    return "Nombre: " + nombre +
        "\nPuntos: " + to_string(puntos) +
        "\nPartidos ganados: " + to_string(partidosganado) +
        "\nPartidos perdidos: " + to_string(partidosperdido) +
        "\nPartidos empatados: " + to_string(partidosempatado) +
        "\nGoles recibidos: " + to_string(Golesrecibidos) +
        "\nGoles anotados: " + to_string(Golesanotados);
}

