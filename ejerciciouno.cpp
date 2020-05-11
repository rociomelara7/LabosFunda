#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int main()

{

    float N1, N2, N3, P;
    string N;

    cout << "INGRESE SU NOMBRE" << endl;
    getline(cin, N);
    cout << "\n" << endl;
    cout << "INGRESE LA PRIMERA NOTA" << endl;
    cin >> N1;
    cout << "\n" << endl;
    cout << "INGRESE LA SEGUNDA NOTA" << endl;
    cin >> N2;
    cout << "\n" << endl;
    cout << "INGRESE LA TERCERA NOTA" << endl;
    cin >> N3;
    P = (N1 + N2 + N3) / 3;
    cout << "\n" << endl;
    cout << "\n" << endl;
    cout << "ESTUDIANTE:" << N << endl;
    cout << "\n" << endl;
    cout << "PROMEDIO OBTENIDO ES:" << P << endl;
    system("pause");

    return 0;

}