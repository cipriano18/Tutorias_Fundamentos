#include <iostream>
using namespace std;
int main(){

	int numero = 0;
	int digito,invertido=0,original;
	cout << "Ingrese un numero " << endl;
	cin >> numero;
	//Guardamos una copia de la variable numero al original

	original = numero;
	while (numero>0){
		//para obtener el ultimo del numero 123 vamos a obtener el 3
		digito = numero % 10;
		//asignamos el digito a invertivo
		invertido = invertido * 10 + digito;
		//vaciar el digito
		numero = numero / 10;
	}
	if (original==invertido){
		cout << "El numero es capicua" << endl;
	}
	else {
		cout << "El numero no es capicua" << endl;
	}
}