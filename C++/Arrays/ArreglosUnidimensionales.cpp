
// "Descripcion del programa"
// Andres Benjamin Antelis Moreno A01637683
// XX/11/2022
//Introducción

//Un arreglo es un grupo consecutivo de localidades de
//memoria que tienen el mismo nombre y el mismo tipo.
//Para hacer referencia a un elemento en el arreglo, se especifica el
//arreglo y la posición numérica del elemento.
//El primer elemento de los arreglos es el 0.

//int arreglo[8]; Array de 8 elementos

//Declarar un array de dimension 10 que almacena valores enteros, Muestra en pantalla los valores y los índices del arreglo
#include <string>
#include <iostream>
using namespace std;

int main(){
    int array[10];
    int a=0;
    for(int i=0;i<10;i++){
        array[a]=i+1;
        a=a+1;
    }
    for(int i=0;i<10;i++){
        cout<<array[i]<<endl;
    }
    return 0;
}