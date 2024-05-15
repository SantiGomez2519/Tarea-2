#include <iostream>
using namespace std;

int variable = 5;

void cambiarValor(int* y){
    y = &variable;
}

void cambiarValor2(int*& y){
    y = &variable;
}

int main () {
    int x = 12;
    int* px = &x;

    cout << "Valor de \"x\" antes: " << *px << endl;
    cambiarValor2(px);
    cout << "Valor de \"x\" despues: " << *px << endl;

    return 0;
}