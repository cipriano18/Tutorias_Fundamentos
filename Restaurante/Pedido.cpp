#include "Pedido.h"
#include<iostream>
using namespace std;
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
    double descuentoTotal = 0.0;
    double precioFinal = 0.0;

    if (this->tipo == 'D') {
        platos = cantidadPlatos*2500;
       
    }
    if (this->tipo == 'A') {
        platos = cantidadPlatos * 3500;
        bebidas = cantidadBebidas * 1000;
        
    }
    if (this->tipo == 'C') {
        platos = cantidadPlatos * 4500;
        int bebidasGratis = cantidadPlatos;
        int bebidasadicional = cantidadBebidas - bebidasGratis;
        if (bebidasadicional <= 0) {
            int bebidasadicional = 0;
        }
        bebidas = bebidasadicional * 1000;
     
    }
    subtotal = bebidas + platos;
    descuentoTotal = subtotal*descuento();
    precioFinal = subtotal - descuentoTotal;

    cout << "Precio total de los platos: " << platos << endl;
    cout << "Precio total de las bebida: " << bebidas << endl;
    cout << "Porcentaje del descuento: " << descuento() * 100 << "%" << endl;
    cout << "Precion final con descuento: " << precioFinal << endl;
    return 0;
}

double Pedido::descuento(){        
    if (cantidadPlatos >= 10) {
        return 0.15;
    }
    if (cantidadPlatos > 8 && cantidadPlatos < 9) {
       
        return 0.10;
    }
    if (cantidadPlatos > 5 && cantidadPlatos < 7) {
       
        return 0.05;
    }
    if (cantidadPlatos < 5) {
       
        return 0.01;
    }
}

void Pedido::generarFactura(){
    cout << "identificador: " << getCodigo() << endl;
    cout << "Tipo de pedido: "<< getTipo()<< endl;
    cout <<"Cantidad de platos: "<< getCantidadPlatos() << endl;
    cout <<"Cantidad de bebidas: "<<getCantidadBebidas() << endl;
    cout << calcularPrecios() << endl;
}

string Pedido::tostring() {
    return "Codigo: " + codigo +
        "\nTipo: " + tipo +
        "\nCantidad de platos: " + to_string(cantidadPlatos) +
        "\nCantidad de bebidas: " + to_string(cantidadBebidas);
}

