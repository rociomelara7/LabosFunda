#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int a [100];
  int i, n, x, numero;
  int v = 0;

  cout << "\n Digite cuantos elementos desea introducir: " << endl;
  cin >> n;
  cout << "\n Digite los elementos del arreglo: " << endl;
  for (i = 0; i < n; i++){
	  cin >> a[i];
  }
  
  cout << "Ingrese el numero que desea saber si se repite en el arreglo" << endl;
  cin >> x;

  for (i = 0; i < n; i++){
	 if (x == a [i]){
		 v++;
		 numero = a[1];
	 }
	 
  }
  
  cout << "El numero " << numero << " se repite " << v << " veces" << endl;

  system ("PAUSE");
  return 0;
  
}