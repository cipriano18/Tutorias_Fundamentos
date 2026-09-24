#include <iostream>
using namespace std;
//Ejercicio 10.8
void buscarApariciones(int array[],int size, int buscando) {
    int contador = 0;
	for (int i = 0; i < size; i++){
		if (buscando==array[i]){
			cout << "la posicion es " << i << endl;
			contador++;
		}
	}
	if (contador==0){
		cout << "El numero no aparecio" << endl;
	}
	else {
		cout << "La cantidad que aparecio es" << contador << endl;
	}
}
void numeroMayor(int array[],int size) {
	int mayor = array[0];//10
	int segundoMayor = 0;
	for (int i = 1; i < size; i++){
		if (array[i]>mayor){ //i  12
			segundoMayor = mayor;//10
			mayor = array[i];//12
		}
		else if (array[i] > segundoMayor) {
			segundoMayor = array[i];
		}
	}
	cout << "El mayor es " << mayor << endl;
	cout << "El Segundomayor es " << segundoMayor << endl;
}
void intercambio(int array[], int size) {
	
	cout << "Foma inverso" << endl;
	for (int i = size-1; i >=0; i--){
		cout << "el valor es" << array[i]<<endl;
	}
	int inicio = 0;
	int final = size - 1;
	while (inicio < final) {
		int aux = array[inicio];//90 20 30
		array[inicio] = array[final];//75 100 25
		array[final] = aux;//90 20 30
		inicio++;
		final--;
	}
	for (int i = 0; i < size; i++) {
		cout << "el valor es " << array[i] << endl;
	}
}
bool estaOrdenado(int array[], int size) {
	bool ordenado = true;
	for (int i = 0; i < size -1; i++){
		if (array[i] > array[i + 1]) {
			ordenado = false;
		}
	}
	return ordenado;
}
void valoresRepetidos(int array[], int size) {
	for (int i = 0; i < size; i++){
		int contador = 0;
		bool yafuecontado = false;
		for (int j = 0; j < i; j++){
			if (array[i] == array[j]) {
				yafuecontado = true;
			}
		}
		if (yafuecontado==false){
			for (int j = 0; j < size; j++){
				if (array[i] == array[j]) {
					contador++;
				}
			}
		}
		if (contador>1){
			cout << " posicio" << array[i] <<"contador"<<contador<< endl;
		}
	}
	
}
void eliminarvalor(int array[], int size, int eliminar) {
	int posicion = -1;
	for (int i = 0; i < size; i++){
		if (array[i] == eliminar) {
			posicion = i;
			break;
		}
	}
	if (posicion!= -1){
		for (int i = posicion;i < size-1;i++) {
			array[i] = array[i + 1];
		}
		size--;
		for (int i = 0; i < size; i++){
			cout << "valores" << array[i] << " ";
		}
	}
	else {
		cout << "no esta valor" << endl;
	}
}


int main(){
	int vector[] = { 20,10,30,30,60,75 };
	
	//numeroMayor(vector, 6);
	//intercambio(vector, 6);
	//cout << estaOrdenado(vector, 6);
	//valoresRepetidos(vector, 6);
	//eliminarvalor(vector, 6,20);
}
