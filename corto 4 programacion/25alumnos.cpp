#include <iostream>
#include <conio.h>
using namespace std;

void alturaalumno(int n, float x[   ]){
    int i;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese la altura del alumno " << i + 1 << " : " << endl;
        cin >> x[i];
    }
    
}
float promedio(float x[ ]){
    int i;
    float suma = 0;
    int n = 25;
    float prom;
    int abajo = 0;
    int arriba = 0;
    for (i = 0; i < n; i++)
    {
        suma = suma + x[i];
        prom = suma / n;
    }
    cout << "El promedio es de: " << prom << endl;

    for (i = 0; i < n; i++)
    {
    
    if (x[i]>prom)
    {
        arriba++;
    }
    else
    {
        abajo++;
    }   
    }
    cout << "Abajo de la media: " << abajo << endl;
    cout << "Arriba de la media: " << arriba << endl;
}

int main(){
    int n = 25;
    float x[100];
    
    cout << "Bienvenido/a al programa" << endl;

    alturaalumno(n, x);

    promedio(x);

system ("PAUSE");
    
}