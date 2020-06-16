#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){

    int seleccion; //Indica el menu
    int a, b, residuo; // Variables para case 1 (Ejercicio#1)
    int h, m ,s; //Variables para case 2 (Ejercicio#2)
    int anio; //Variables para case 3 (Ejercicio#3)
    int dia, mes, anyo, dia2, mes2, anyo2; //Variables para case 4 (Ejercicio#4)

    cout << "Seleccione un ejercicio" << endl;
    cout << "1 - Ejercicio#1" << endl;
    cout << "2 - Ejercicio#2" << endl;
    cout << "3 - Ejercicio#3" << endl;
    cout << "4 - Ejercicio#4" << endl;
    cout << "Seleccion: " << endl;
    cin >> seleccion;

    switch (seleccion) //Estructura del menu
    {
    case 1:
        cout << "\n MCD DE DOS NUMEROS ENTEROS" << endl;
        cout << "\n Digite el primer numero: " << endl;
        cin >> a;
        cout << "\n Digite el segundo numero: " << endl;
        cin >> b;

        do{
            residuo = a % b;
            if (residuo != 0){
                a = b;
                b = residuo;
            }
        } 
        while (residuo != 0);
        cout << "\n El MCD es: " << b << endl;
        
    break;
    case 2:
        printf( "\n CALCULADORA DE HORA");
        printf( "\n   Introduzca horas: " );
        scanf( "%d", &h );
        printf( "\n   Introduzca minutos: " );
        scanf( "%d", &m );
        printf( "\n   Introduzca segundos: " );
        scanf( "%d", &s );

        if ( h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59 ){
            s++;
            if ( s == 60 ){
                s = 0;
                m++;
                if ( m == 60 ){
                    m = 0;
                    h++;
                    if ( h == 24 )
                        h = 0;
                }
            }
            printf( "\n   Un segundo despu%cs la hora es: %d:%d:%d", 130, h, m, s );
        }
        else
            printf( "\n   ERROR: La hora es incorrecta." );
    break;
    case 3:
        cout << "\n IDENTIFICAR SI UN ANIO ES BISIESTO O NO" << endl;
        cout << "\n Introduzca un anio" << endl;
        cin >> anio;

        if (anio % 400){
            cout << "Si es bisiesto" << endl;
        }
        else if (anio % 4 == 0 && anio % 100 != 0){
            cout << "Si es bisiesto" << endl;
        }
        else{
            cout << "No es bisiesto" << endl;
        }
    break;
    case 4:
        cout << "\n CALCULADORA DE DIA SIGUIENTE" << endl;
        cout << "\n Ingrese un dia: " << endl;
        cin >> dia;
        cout << "\n Ingrese un mes: " << endl;
        cin >> mes;
        cout << "\n Ingrese un anyo: " << endl;
        cin >> anyo;

        if ((dia == 30 && (mes == 4 || mes == 9 || mes == 11)) || (dia == 29 && mes == 2) || (dia == 28 && mes == 2 && ((anyo % 4 != 0) || (anyo % 100) == 0) && (anyo % 400) != 0) || dia == 31){
            mes2 = mes + 1;
            dia2 = 1;
        }
        else{
            dia2 = dia + 1;
            mes2 = mes;
        }
        if (dia2 == 1 && mes2 == 13){
            mes2 = 1;
            anyo2 = anyo + 1;
        }
        else{
            anyo2 = anyo;
        }
        cout << "\n La fecha es: " << dia2 << "-" << mes2 << "-" << anyo2 << endl;

    break;
    }

    return 0;

}