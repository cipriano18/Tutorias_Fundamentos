#include "Temperaturas.h"
Temperaturas::Temperaturas(){
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 7;j++) {
			Temperatura[i][j] = 0;
		}
	}
}

void Temperaturas::registrarTemperaturas(){
	for (int i = 0;i < 4;i++) {
		cout << "Ciudad " << i + 1 << endl;
		for (int j = 0;j < 7;j++) {
			cout << "Día " << j + 1 << endl;
			cin >> Temperatura[i][j];
		}
	}
}

void Temperaturas::mostrarTemperaturas(){
	for (int i = 0;i < 4;i++) {
		cout << "Ciudad " << i + 1 << endl;
		for (int j = 0;j < 7;j++) {
			cout<< Temperatura[i][j]<<" ";

		}
	}
}

double Temperaturas::promedioCiudad(int ciudad){
	double suma = 0.0;
		for (int j = 0;j < 7;j++) {
			suma += Temperatura[ciudad][j];
		}
	return suma/7;
}

double Temperaturas::temperaturaMayor(){
	double mayor = Temperatura[0][0];
	for (int i = 0;i < 4;i++) {	
		for (int j = 0;j < 7;j++) {
			if (Temperatura[i][j]>mayor) {
				mayor = Temperatura[i][j];
		}
		}
	}
	return mayor;
}

double Temperaturas::ciudadMayorPromedio(){
	int ciudadMayor = 0;
	double mayor = promedioCiudad(0);
	for (int i = 1;i < 4;i++) {
		if (promedioCiudad(i) > mayor) {
			mayor = promedioCiudad(i);
			ciudadMayor = i;
		}
	}



	return ciudadMayor;
}
