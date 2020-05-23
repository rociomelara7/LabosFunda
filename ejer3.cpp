#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){

    int numero;
    cout << "Ingrese el numero: " << endl;
    cin >> numero;
    cout << "\n";
    
    if (numero > 0){
        cout << "El numero es positivo" << endl;
    }
    else if (numero < 0){
        cout << "El numero es negativo" << endl;
    }
    else
    {
        cout << "El numero es cero" << endl;
    }
    system("PAUSE");
    return 0;
    
    
}