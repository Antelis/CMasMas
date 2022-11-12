// "Descripcion del programa"
// Andres Benjamin Antelis Moreno A01637683
// XX/11/2022//Introducción

//Declara un arreglo de tamaño 10 que almacene números enteros. Solicita los valores alusuario. Suma y despliega el contenido de todo el arreglo
#include <string>
#include <iostream>
using namespace std;

int main(){
    int num;
    int array[10];
    cout<<"Ingrese numeros que quieras guardar en el arreglo de tamano 10"<<endl;
    for(int i=0;i<10;i++){
    cout<<"Ingrese un numero: ";
    cin>>num;
    array[i]=num;
    }
    for(int i=0;i<10;i++){
        cout<<array[i]<<endl;
    }
    return 0;
}