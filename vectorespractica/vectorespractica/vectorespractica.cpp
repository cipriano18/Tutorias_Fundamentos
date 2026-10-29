
#include <iostream>
using namespace std;
int main()
{                       // 0     1  posicion 2
	int vector[] = { 2,3,-2,4 }; //mostrarme 2
	int positivo = 0;
	for (int i = 0 ; i < 4 ; i++){
		if (vector[i]>0)
		{
			cout <<"numeros positivos"<< vector[i]<<i<<endl;
			positivo++;
		}
	}
	cout << positivo;
	
	//comparo i < 5
	// 0 < 2   sumarle 1 a i 
	// 1 < 2   sumarle 1 a i 
	// 2 < 2 no le sumo a i
	 
}
