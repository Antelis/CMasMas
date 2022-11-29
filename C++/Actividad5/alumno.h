#include <iostream>
#include <string>
using namespace std;

class Alumno{
    private:
        string matricula;
        string nombre;
        int edad;
        string carrera;
    public:
        Alumno(string m,string n,int e,string c){
//Checar si en verdad es necesario declarar estas variables
            matricula=m;
            nombre=n;
            edad=e;
            carrera=c;
        }
//           Si no sirve esta seccion agregar () despues de nombrar los gets
    string getMatricula();
    string getNombre();
    int getEdad();
    string getCarrera();
//*****************
    void setMatricula(string m);
    void setNombre(string n);
    void setEdad(int e);
    void setCarrera(string C);

    void imprimeAlumno();
    void cumpleanios();
};
string Alumno::getMatricula(){
    return matricula;
}
string Alumno::getNombre(){
    return nombre;
}
int Alumno::getEdad(){
    return edad;
}
string Alumno::getCarrera(){
    return carrera;
}
void Alumno::setMatricula(string m){
    matricula=m;
}
void Alumno::setNombre(string n){
    nombre=n;
}
void Alumno::setCarrera(string c){
    carrera=c;
}
void Alumno::setEdad(int e){
    edad=e;
}
void Alumno::imprimeAlumno(){
    cout<<"Matricula del alumno: "<<matricula<<endl;
    cout<<"Nombre del alumno: "<< nombre<<endl;
    cout<<"Edad del alumno: "<<edad<<endl;
    cout<<"Carrera del alumno: "<<carrera<<endl;
}
void Alumno::cumpleanios(){
    edad++;
}