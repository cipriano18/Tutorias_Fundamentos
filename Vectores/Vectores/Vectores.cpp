
#include <iostream>
/*Ejercicio 1 - Suma de elementos
Desarrolle un programa en C++ que calcule la suma de todos los elementos de un arreglo 
de enteros. El tamaño del arreglo y
sus elementos deben ser ingresados por el usuario.
*/
//supongamos que tenemos el vecto 1 ,2 ,3 ,4 =10
const int size = 5;
int sumaVector(int vector []){
    int suma = 0;
	for (int i = 0; i < size; i++)
	{
		suma += vector[i];
	}
	return suma;
}

/*
Ejercicio 2 - Buscar un elemento
Desarrolle un programa en C++ que permita al usuario buscar un elemento específico 
en un arreglo de enteros. El programa
debe indicar si el elemento se encuentra en el arreglo o no.
*/
bool buscarNumero(int vector[], int buscado) {
	for (int i = 0; i < size; i++)
	{
		if (vector[i]==buscado)
		{
			return true;
		}
	}
	return false;
}

/*Ejercicio 10.2 - Calcular la media
ANÁLISIS ANTES DE PROGRAMAR
Identifique las variables, el tamaño del arreglo, los índices, los ciclos y 
las condiciones que necesita.
Solicite al usuario 5 números y almacénelos en un arreglo.
Seguidamente, recorra el arreglo y calcule la media de los números almacenados.
El cálculo debe realizarse mediante una función que reciba el arreglo y 
retorne la media calculada.
Ejemplo: int vector[] = {13, 21, 45, 5, 98} -> Media = 36.4*/

double promedio(int vector[]) {
	int suma = sumaVector(vector);

	return (double)suma / size;
}
int main(){
	int vector[] = { 13, 21, 45, 5, 98 };
	std::cout << "la suma del vector es " << sumaVector(vector)<<std::endl;
	std::cout << "buscar numero " <<buscarNumero(vector,5) << std::endl;
	std::cout << "media es  " << promedio(vector) << std::endl;
}