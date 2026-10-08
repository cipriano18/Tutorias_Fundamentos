#include <iostream>
using namespace std;
void Encontrar(int matriz[2][3]);
int sumar(int matriz[3][3]);
int diagonal(int matriz[3][3]);
void transpuesta(int matriz[2][3], int matrize[3][2]);
int pares(int matriz[3][3]);
void sumafilas(int matriz[3][3]);
void numerobuscado(int matriz[3][3], int numero);
const int N = 3;
void matrizIzquierda(int matriz[N][N], int matrize[N][N]);
int main(){
	int matrize [3][3];
	int numbers[3][3] =
	{ { 1,2,3 },
	{ 4,5,6	},
	{ 7,8,9 } };
	//Encontrar(numbers);
	//out<<sumar(numbers)<<endl;
	//numerobuscado(numbers, 3);
	matrizIzquierda(numbers,matrize);
	//transpuesta(numbers, matrize);
	//cout<<pares(numbers);
	//sumafilas(numbers);
}
/*void Encontrar(int matriz[2][3]) {
	int menor = matriz[0][0];
	int mayor = matriz[0][0];

	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 3;j++) {
			if (menor > matriz[i][j]) {//menor=1 , m[i][j]=0 
				menor = matriz[i][j];
			}
			if (mayor < matriz[i][j]) {
				mayor = matriz[i][j];


			}



		}

	}
	cout << "Mayor" << mayor<<endl;
	cout << "Menor" << menor << endl;



}
*/
/*int sumar(int matriz[3][3]) {
	int suma = 0;
	for (int i = 0;i < 3;i++) {
		suma += matriz[i][i];
	}

	

	return suma;

}
*/
/*int diagonal(int matriz[3][3]) {
	int size = 2;
	int suma = 0;
	for (int i = 0;i < 3;i++) {
		suma += matriz[i][size-i];
	}



	return suma;



}*/
/*void transpuesta(int matriz[2][3], int matrize[3][2]) {

	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 3;j++) {
			matrize[j][i] = matriz[i][j];

		
		}
	}
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 2;j++) {
			matrize[j][i] = matriz[i][j];

			cout << matrize[i][j] << " ";
		}
		cout << endl;
	}






}*/
/*int pares(int matriz[3][3]) {
	int contador = 0;
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			if (matriz[i][j] % 2 == 0) {
				contador++;
			}

		}
	}

	return contador;
}*/
/*void sumafilas(int matriz[3][3]) {
	int suma = 0;

	for (int i = 0;i < 3;i++) {
	
		for (int j = 0;j < 3;j++) {
			suma += matriz[i][j];
		}
		
		cout << "Sumaporfila " << suma << endl;
		suma = 0;
	}

}*/
/*void numerobuscado(int matriz[3][3], int numero) {

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			if (matriz[i][j] == numero) {
				
				cout << "El numero se encontro en la posicion: " << i << " " << j << endl;
			}


		}
	}
}*/
/*void matrizIzquierda(int matriz[N][N], int matrize[N][N]) {

	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			matrize[N-1-j][i] = matriz[i][j];
		}
		
	}
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			cout << matrize[j][i] << " ";
		}
		cout << endl;
	}





}*/