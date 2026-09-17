#include <iostream>
using namespace std;
int main(){
	int clientes, opcion=0;
	int depositos = 0, retiros = 0;
	double saldo=0.0, monto=0.0, totalDepositado = 0.0;
	cin >> clientes;
	for (int i = 0; i < clientes; i++) {
		cout << "saldo inicial:" << endl;
		cin >> saldo;
		cout << "valor de saldo" << saldo << endl;
		saldo += saldo;
		cout << "opciones 1 deposito : 2 retiro : 3 consulta" << endl;
		cin >> opcion; //recuerde opcion =1; asignando comparar ==
		if (opcion == 1) {
			cin >> monto; //-100
			if (monto > 0) {
				saldo += monto;
				totalDepositado += monto;
				depositos++;
			}
		}
		else if (opcion == 2) {
			cin >> monto;
			if (monto > 0 && monto <= saldo) {
				saldo -= monto;
				retiros++;
			}
		}
		else if (opcion == 3) {
			cout << "Saldo: " << saldo << endl;
			cout << "Depositos: " << depositos << endl;
			cout << "Retiros: " << retiros << endl;
			cout << "Total depositado: " << totalDepositado << endl;
		}
	}
	

}
