// Función que lea dos números por teclado y permita elegir entre 3 opciones en un menú
// Andres Benjamin Antelis Moreno A01637683
// 04/11/2022

#include <iostream>
using namespace std;

int main(){
    int x;
    int y;
    char a;
    cout<<"Ingresa el valor del primer numero: ";
    cin>>x;
    cout<<"Ingresa el valor del segundo numero: ";
    cin>>y;
    cout<<"Que quieres hacer con los numeros: Suma(s), Resta(r), Multlipicacion (m): ";
    cin>>a;
    if(a=='s'){
        cout<<"La suma de los numeros es: "<<x+y<< endl;
    }
    else if(a=='r'){
        cout<<"La resta de los numeros es: "<<x-y<< endl;
    }
    else if(a=='m'){
        cout<<"La multlipicacion de los numeros es: "<<x*y<< endl;
    }
    else{
        cout<<"Opcion no valida, intente otra vez";
    }
}