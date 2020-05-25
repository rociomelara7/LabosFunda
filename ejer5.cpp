#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    char palabra[50];
    cout << "Ingrese una palabra" << endl;
    cin >> palabra;
    int Nm = strlen(palabra);

    if (palabra[0] == palabra[Nm-1]){
       cout << "Inicia y termina con la misma letra" << endl;
    }
    else
    {
        cout << "Inicia pero no termina con la misma letra" << endl;
    }
    
    system("PAUSE");
    return 0;
}