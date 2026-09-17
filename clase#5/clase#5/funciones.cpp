#include "Funciones.h"
#include <iostream>
using namespace std;
void mostrar_mensaje(string nombre) {
	cout << "HOLA " << nombre;
}

int contar_caracteres(std::string palabra) {
	int contador = 0;
	while (palabra[contador] != 0)
	{
		contador++;
	}

	return contador;

}

string mayuscula(string palabra) {
	int final = contar_caracteres(palabra);
	string palabra_mayuscula = "";
	for (int i = 0; i < final; i++) {
		//hOla
		if (palabra[i] >= 97 && palabra[i] <= 122) {
			palabra_mayuscula += palabra[i] - 32;
			//H
		}
		else {
			//O 
			palabra_mayuscula += palabra[i];
		}
	}
	return palabra_mayuscula;
}

int suma(int number1, int number2)
{
	return number1 + number2;
}

string invertir_palabra(string palabra) {
	string invertir = "";
	int final = contar_caracteres(palabra);//Hola 4    0 1 2 3 4 
	for (int i = final - 1; i >= 0; i--) {
		invertir += palabra[i];
	}

	return invertir;
}

void palindroma(string palabra) {
	string invertido = invertir_palabra(palabra);
	if (palabra == invertido) {
		cout << "La palabra es palíndroma." << endl;
	}
	else {
		cout << "La palabra no es palíndroma." << endl;
	}

}

bool palindrome(string palabra)
{
	string invertido = invertir_palabra(palabra);
	if (palabra == invertido) {
		return true;
	}
	else {
		return false;
	}
}

int invertir_numero(int numero){
	int invertido = 0;
	while (numero>0)
	{//12345 % 10= 5
		//1234%10=4
		int  digito = numero % 10;
		invertido = invertido * 10 + digito;
		numero = numero / 10;
	}
	return invertido;
}

int texto_int(string texto){
	int numero = 0;
	for (int i = 0; i < texto.size(); i++){
		int digito = texto[i] - 48;
		numero = numero * 10 + digito;
	}
	return numero;
}
