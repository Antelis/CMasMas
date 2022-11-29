#include <iostream>
#include <string>
using namespace std;
#include "alumno.h"

int main(){
    string matricula,nombre,carrera;
    int edad;

    cout<<"La matricula es: "<<endl;
    cin>>matricula;
    cout<<"El nombre es: "<<endl;
    cin>>nombre;
    cout<<"La edad es: "<<endl;
    cin>>edad;
    cout<<"La carrera cursando es: "<<endl;
    cin>>carrera;

    Alumno alumno(matricula,nombre,edad,carrera);
    alumno.imprimeAlumno();
    alumno.cumpleanios();
    return 1;
}