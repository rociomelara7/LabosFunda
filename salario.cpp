#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(void){

    float horastrabajadas, horasextra, salariototal, salarioreal, descuento;

    cout << "Ingresa tus horas trabajadas:" << endl;
    cin >> horastrabajadas;
    cout << "\n";
    cout << "Ingresa tus horas extra:" <<  endl;
    cin >> horasextra;
    cout << "\n"; 

    salariototal = (horastrabajadas*1.75)+(horasextra*2.30);
    cout << "Tu salario total es de $ " << salariototal << endl;

    if (salariototal > 500){
        descuento = (0.04 + 0.0625 + 0.1);
    }
    else{
        descuento = (0.04 + 0.0625);
    }

    salarioreal = (salariototal - (descuento*salariototal));
    cout << "Tu salario real es de $" << salarioreal << endl;

    system ("PAUSE");
    return 0;
}
