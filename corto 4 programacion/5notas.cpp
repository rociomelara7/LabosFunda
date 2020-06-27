#include <iostream>
using namespace std;
 

float promedio(float nota1,float nota2, float nota3, float nota4, float nota5){
    float Promedio;
	Promedio = (nota1*0.20+nota2*0.20+nota3*0.20+nota4*0.20+nota5*0.20);
	return (Promedio);
}
 

int main()
{float nota1, nota2, nota3, nota4, nota5, i, n, notafinal;

cout<<"Ingrese cantidad de alumnos:";
cin>>n;

    
for (i=0;i<n;i++)
    {cout <<"\nNotas del estudiante " << i + 1 << endl;  
	cout<<"Ingrese nota 1: ";
	cin>>nota1;
	cout<<"Ingrese nota 2: ";
	cin>>nota2;
	cout<<"Ingrese nota 3: ";
	cin>>nota3;
    cout<<"Ingrese nota 4: ";
	cin>>nota4;
    cout<<"Ingrese nota 5: ";
	cin>>nota5;
	notafinal = promedio(nota1,nota2,nota3,nota4,nota5);

	
	if (notafinal >= 6)
    {
        cout<<"El alumno ha aprobado la materia con un promedio de: " << notafinal << endl;
	}
	else
		cout<<"El alumno ha reprobado la materia con un promedio de: " << notafinal << endl;
	}

    system ("PAUSE");

}