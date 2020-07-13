//Programa que procese información sobre productos comprados por un cliente en una tienda, a modo de procesamiento de una factura de compra
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

//Estructura del arreglo 
const int longCad = 20; 
struct costoPorArticulo{
    char nombreArticul[longCad + 1]; 
    int cantidad; 
    float precio; 
    float costoPorArticulo; 
}
Articulos[100]; 

//Definicion de funciones
void recopilacion (int max);
float costo (int max);
void estructura (int max);
float costototal (int max);

//Funcion main

int main(){

    int max;
    cout << "\n BIENVENIDO/A A LA TIENDA VIRTUAL" << endl;
    cout << "Ingrese la cantidad de producto a comprar: " << endl;
    cin >> max;

    recopilacion (max);
    costo (max);
    estructura (max);
    costototal (max);

    cout << "\n El costo total de su compra es de: " << "$" << costototal;

    return 0;

}

//Funcion de recopilacion donde se solicita al usuario ingresar los datos
void recopilacion(int max){

    int i;

    for (i = 0; i < max; i++)
    {
        cout << "\n PRODUCTO " << i+1 << endl;
        cout << "Ingrese el nombre del producto: ";
        cin >> Articulos[i].nombreArticul;
        cout << "Ingrese la cantidad del producto comprado: ";
        cin >> Articulos[i].cantidad;
        cout << "Ingrese el precio del producto: " << "$";
        cin >> Articulos[i].precio;

    }
}

//Funcion que calcula el costo total

float costo(int max){

    int i;
    
    for (i = 0; i < max; i++)
    {
        Articulos[i].costoPorArticulo = Articulos[i].precio * Articulos[i].cantidad;
    }
}

//Funcion que desplega el arreglo

void estructura (int max){

    int i;

    for (i = 0; i < max; i++)
    {
        cout << "\n RECIBO PRODUCTO " << i+1 << endl;
        cout << "Nombre del producto: " << Articulos[i].nombreArticul << endl;
        cout << "Cantidad de producto comprada: " << Articulos[i].cantidad << endl;
        cout << "Precio del producto: " << "$" << Articulos[i].precio << endl;
        cout << "Costo total: " << "$" << Articulos[i].costoPorArticulo << endl;
    }
    
}

//Funcion que calcula el costo total de la compra

float costototal(int max){

    int i;
    float suma = 0;

    for (i = 0; i < max; i++)
    {
        suma += Articulos[i].costoPorArticulo;
    }

    cout << "\n El costo total de su compra es de: " << "$" << suma << endl;

    system ("PAUSE");
}
