#include "Pedido.h"

Pedido::Pedido() {
    cantidadPlatos = 0;
    tipo = ' ';
    cantidadBebidas = 0;
    codigo = "";
}

Pedido::Pedido(int cantidadPlatos, char tipo, int cantidadBebidas, string codigo) {
    this->cantidadPlatos = cantidadPlatos;
    this->tipo = tipo;
    this->cantidadBebidas = cantidadBebidas;
    this->codigo = codigo;
}

void Pedido::setTipo(char tipo) {
    this->tipo = tipo;
}

void Pedido::setCantidadPlatos(int cantidad) {
    cantidadPlatos = cantidad;
}

void Pedido::setCantidadBebidas(int cantidad) {
    cantidadBebidas = cantidad;
}

void Pedido::setCodigo(string codigo) {
    this->codigo = codigo;
}

char Pedido::getTipo() {
    return tipo;
}

int Pedido::getCantidadPlatos() {
    return cantidadPlatos;
}

int Pedido::getCantidadBebidas() {
    return cantidadBebidas;
}

string Pedido::getCodigo() {
    return codigo;
}

double Pedido::calcularPrecios(){
    double bebidas=0.0;
    double platos=0.0;
    double subtotal = 0.0;
    double descuento = 0.0;
    double precioFinal = 0.0;

    if (this->tipo == 'D') {
        platos = cantidadPlatos*2500;
        bebidas = 0;
    }
    if (this->tipo == 'A') {
        platos = cantidadPlatos * 3500;
        bebidas = cantidadBebidas * 1000;
    }
    if (this->tipo == 'C') {
        platos = cantidadPlatos * 4500;
        int bebidasGratis = cantidadPlatos;
        int bebidasadicional = cantidadBebidas - bebidasGratis;
        if (bebidasadicional < 0) {
            int bebidasadicional = 0;
        }
        bebidas = bebidasadicional * 1000;
    }
    subtotal = bebidas + platos;
    descuento = subtotal * this->descuento()/100;
    precioFinal = subtotal - descuento;



    return precioFinal;
}

double Pedido::descuento(){
    if (cantidadPlatos >= 10) {

        return 15;

    }
    if (cantidadPlatos > 8 && cantidadPlatos < 9) {

        return 10;

    }


    return 0.0;
}

string Pedido::tostring() {
    return "Codigo: " + codigo +
        "\nTipo: " + tipo +
        "\nCantidad de platos: " + to_string(cantidadPlatos) +
        "\nCantidad de bebidas: " + to_string(cantidadBebidas);
}

