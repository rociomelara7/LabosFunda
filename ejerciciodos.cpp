#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float r,pi=3.14,p,a;//ponemos el valor de pi 
    cout << "INTRODUCE EL RADIO DEL CIRCULO: " ;cin>>r;
    a = pow(r,2)*pi;
    cout << "EL AREA DEL CIRCULO ES: " << a<<endl;
    cout << "EL PERIMETRO DEL CIRCULO ES: " <<p<<endl;
    return 0;
}