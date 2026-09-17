#include <iostream>
using namespace std;
/*Cree una función en C++ que reciba un arreglo de números y su tamaño como parámetros.
Recorra el arreglo y determine cuál es el número menor.
La función deberá retornar el valor menor encontrado.
Ejemplo: {13, 21, 45, 5, 98} -> Valor a retornar: 5*/


int menor(int arraay[], int size);
int mayor(int arrayy[], int size);
void signos(int arreglo[], int size);
void Multiplos(int arreglo[], int size);


int main(){
	
	int array[]={ 13, 21, 45, 5, 98,2,20,0,10,80 };
	//menor(array, 5);
	//mayor(array, 5);
	signos(array, 10);
	Multiplos(array, 10);


}


int menor(int arraay[], int size) {
	int menor = arraay[0];
	for (int i=1;i < size;i++) {
		if (arraay[i] < menor) {

			menor = arraay[i];


		}
		cout << menor << endl;
	}


	return menor;
}
/*Cree una función en C++ que reciba un arreglo de números y su tamaño como parámetros.
Recorra el arreglo y determine cuál es el número mayor.
La función deberá retornar el valor mayor encontrado.
Ejemplo: {13, 21, 45, 5, 98} -> Valor a retornar: 98*/
int mayor(int arrayy[], int size) {
	int mayor = arrayy[0];
	for (int i = 1;i < size;i++) {
		if (arrayy[i] > mayor) {

			mayor = arrayy[i];


		}
		cout << mayor << endl;
	}


	return mayor;

}
/*Solicite 10 números enteros y almacénelos en un arreglo.
Recorra el arreglo y determine cuántos valores son positivos, cuántos son negativos y cuántos son iguales a cero.
Además, calcule la suma total de los elementos.*/
void signos(int arreglo[],int size) {
	int suma = 0;
	int contadorPositivos = 0;
	int contadorNegtivos = 0;
	int contadorIgualescero = 0;

	for (int i = 0;i < size;i++) {
		if (arreglo[i] > 0) {
			contadorPositivos++;

		}
		else if (arreglo[i] < 0) {
			contadorNegtivos++;
		}
		else {
			contadorIgualescero++;
		}

		suma += arreglo[i];


	}
	cout << "Cantidad de positivos: "<< contadorPositivos << endl;
	cout << "Cantidad de negativos: "<< contadorNegtivos << endl;
	cout << "Cantidad de ceros: " << contadorIgualescero << endl;
	cout << "Suma: "<<suma << endl;


}
/*Solicite 12 números enteros y almacénelos en un arreglo.
Determine cuántos son pares, cuántos son impares, cuántos son múltiplos de 3 y cuántos son múltiplos de 5.
Un mismo número puede pertenecer a más de una clasificación.*/
void Multiplos(int arreglo[], int size) {
	int contPares = 0;
	int contImpar=0;
	int multiplos3 = 0;
	int multiplos5 = 0;
	for (int i = 0;i < size;i++) {
		if (arreglo[i]%2== 0) {
			contPares++;

		}
		else{ 
			contImpar++;
		}
		if (arreglo[i] % 3 == 0) {
			multiplos3++;
		}
		if (arreglo[i] % 5 == 0) {
			multiplos5++;
		}


	}
	cout << "Impares: " << contImpar << endl;
	cout << "Pares: " << contImpar << endl;
	cout << "Multiplos de 3: " << multiplos3 << endl;
	cout << "Multiplos de 5: " << multiplos5 << endl;





}