#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main(){
    float p, c, t;
    string n;

    cout << "Ingrese nombre del producto: " << endl;
    getline(cin, n);
    cout << "\n" << endl;
    cout << "Ingrese precio del producto: " << endl;
    cin >> p;
    cout << "\n" << endl;
    cout << "Ingrese cantidad comprada: " << endl;
    cin >> c;
    cout << "\n" << endl;
    cout << n << endl;
    cout << "El producto tuvo un costo de: " << p << endl;
    cout << "Se compro: " << c << endl;
    cout << "\n" << endl;
    t = p*c;
    cout << "\n" << endl;
    cout << "El total de dinero gastado fue de: " << t << endl;
    return 0;
    
}