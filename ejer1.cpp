#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(void){

    int numerador, denominador;
    cout << "Ingrese el numerador:" << endl;
    cin >> numerador;
    cout << "\n";
    cout << "Ingrese el denominador: " << endl;
    cin >> denominador;
    cout << "\n";

    if (numerador % denominador == 0){
        cout << denominador << " es divisor de " << numerador << endl; 
    }
    else
    {
        cout << denominador << " no es divisor de " << numerador << endl;
    }
    system("PAUSE");
    return 0;

}