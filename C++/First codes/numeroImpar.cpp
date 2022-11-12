// Función que lea un número impar por teclado. Si el usuario no introduce un número impar, debe repetirse el proceso hasta que lo introduzca correctamente
// Andres Benjamin Antelis Moreno A01637683
// 04/11/2022
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Ingresa un numero impar: ";
    cin>>a;

    while(a%2==0){
    cout<<"El numero era un par, intente otra vez: ";
    cin>>a;
    }
    cout<<"El numero era impar, felicidades (:";
}