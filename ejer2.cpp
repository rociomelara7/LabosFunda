#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int numero;
    cout << "Ingrese un numero: " << endl;
    cin >> numero;
    cout << "\n";
    
    if (numero == 0){
        cout << "El numero es cero" << endl;
    }
    else if (numero % 2 == 0){
        cout << "El numero es par" << endl;
    }
    else
    {
        cout << "El numero es impar" << endl;
        
    }
    system("PAUSE");
    return 0;
    
}