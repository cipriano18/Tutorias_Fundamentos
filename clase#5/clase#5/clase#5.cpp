#include <iostream>
using namespace std;

int main() {

    int x = 20;
    int* p;

    // &x obtiene la direccion de x y la guarda en p.
    p = &x;

    cout << "Valor de x: " << x << endl;

    // p contiene la direccion de x.
    cout << "Direccion almacenada en p: " << p << endl;
    *p = 50;
    // *p obtiene el valor que existe en la direccion almacenada en p.
    cout << "Valor apuntado por p: " << x << endl;

    return 0;
}