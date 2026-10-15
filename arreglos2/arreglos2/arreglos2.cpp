#include <iostream>
using namespace std;
void buscarApariciones(int array[],int buscando,int size) {
    int apariciones = 0;
	for (int i = 0; i < size; i++){
		if (buscando==array[i]){
			cout << "posicion" << i << endl;
			apariciones++;
		}
	}
	if (apariciones==0){
		cout << "El numero buscado no aparecio" << endl;
	}
	else
		cout << "Numero de veces que aparece es" << apariciones << endl;
}
void numeromayor(int array[], int size) {
	int mayor = array[0];
	int segundoMayor = 0;
	for (int i = 1; i < size; i++){
		if (array[i] > mayor) {
			segundoMayor = mayor;
			mayor = array[i];
		}
		else if (array[i] > segundoMayor) {
			segundoMayor = array[i];
		}
	}
}
void cambiarorden(int array[], int size) {
	for (int i = size - 1; i >=0; i++){
		int aux = array[i];
		array[i] = array[size - 1];
		array[size - 1] = aux;
	}
}
int main()
{
    std::cout << "Hello World!\n";
}
