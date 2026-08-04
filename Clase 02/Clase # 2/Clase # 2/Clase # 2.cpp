#include <iostream>
using namespace std;
/*
Que es una variable
si yo quiero guardar la edad 
el nombre de la persona
*/
int edad;//para guardar numeros
string nombre; // sirve para guardar palabras
float altura;//sirve para guardar decimales
double pi;//sirve para guardar 12.0123 -> 12.012323
bool aprovado; //  true o false 1 y 0
char letra;//sirve para guardar un caracter
const int dias = 7;
const float pi1 = 3.1416;
/*
operadores de asignacion 
edad=edad+2;
edad+=2;
edad*=2;
edad-=2;
edad/=2;
*/
int main() {
	double nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, promedio = 0.0;
	/*cout sirve para mostar datos por consola
	 sintexis cout<<"Hola "<<endl;  */
	 /*cin sirve para que el usuario me ingrese los datos por consola
	 ingrese nota =80
	 sintaxis cin>>nombre de la variable;
	 */
	cout << "Ingrese el valor de la nota1" << endl;
	cin >> nota1;  //que pasa si el usuario -1 o una nota mayor a 100
	//el usuario llega y me pone 101
	if (nota1<0 || nota1>100){
		cout << "Nota en el rango no permitido" << endl;
	}
	cout << "Ingrese el valor de la nota2" << endl;
	cin >> nota3;
	if (nota2 < 0 || nota2>100) {
		cout << "Nota en el rango no permitido" << endl;
	}
	cout << "Ingrese el valor de la nota1" << endl;
	cin >> nota3;
	if (nota3 < 0 || nota3>100) {
		cout << "Nota en el rango no permitido" << endl;
	}
	/*como se que va entre parentecis 
	primero va la suma y luego la multiplicacion o division 
	num1+num2*num3;
	(num1+num2)*3;
	*/
	promedio = (nota1 + nota2 + nota3) / 3;
	cout << "Nota en el promedio es"<<promedio << endl;
	if (promedio >= 70){
		cout << "Estudiante aprovo" << endl;
	}
	else if (promedio >= 6 && promedio < 7)   //pero el promedio debe de estar en el rango IGUAL  a 6 pero menor que 7
	{
		cout << "Estudiante va a reposicion" << endl;
	}
	else {
		cout << "Estudiante reprovo" << endl;
	}
}

