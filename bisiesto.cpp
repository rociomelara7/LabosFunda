//Programa que indique si un año es bisiesto o no

#include <iostream>
#include <math.h>
#include <string.h>
#include <conio.h>
using namespace std;

int main(){

    int anio;
    cout << "Introduzca un anio" << endl;
    cin >> anio;

    if (anio % 400)
    {
        cout << "Si es bisiesto" << endl;
        
    }
    else if (anio % 4 == 0 && anio % 100 != 0)
    {
        cout << "Si es bisiesto" << endl;
    }
    else
    {
        cout << "No es bisiesto" << endl;
    }
    
    system ("PAUSE");
    return 0;
}
