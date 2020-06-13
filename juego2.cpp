//El usuario debe adivinar un numero entre el 1 y 100 en 5 intentos

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
using namespace std;

int main(void){

int x, num, numero = 0;
int intentos = 5;
srand((unsigned)time(NULL));
x = 1 + rand() % 100;

cout << "Bienvenido/a al juego \n" << endl;
cout << "Adivina un numero entre 1 y 100" << endl;
cout << "Tienes 5 intentos" << endl;
cout << "Si deseas salir del juego, presiona 700"  << endl;

while (numero == 0){
        
    cout << "Digita un numero: " << endl;
    cin >> num;

    if (num >= 1 && num <= 100){

        if (num > x){
            cout << "El numero es menor" << endl;
        }
        else if (num < x){
            cout << "El numero es mayor" << endl;
        }
        else{
            cout << "Felicidades, adivinaste!" << endl;
            numero = 1;
        }
            
    }
intentos--;
if (intentos == 4 && num != x && num != 700){
    cout << "Tienes 4 intentos mas" << endl;
}
else if (intentos == 3 && num != x && num != 700){
    cout << "Tienes 3 intentos mas" << endl;
}
else if (intentos == 2 && num != x && num != 700){
    cout << "Tienes 2 intentos mas" << endl;
}
else if (intentos == 1 && num != x && num != 700){
    cout << "Tienes 1 intento mas" << endl;
}
else if (intentos == 0 && num != x && num != 700){
    cout << "Tus intentos han terminado" << endl;
    cout << "El juego ha terminado" << endl;
}
if (num == 700){
    cout << "Gracias por participar, haz finalizado el juego" << endl;
    return 0;
}
    
}

system ("PAUSE");
return 0;

}
    