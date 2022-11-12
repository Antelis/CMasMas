// Función que pida al usuario cuantos números quiere introducir. Luego lea todos los números y realice una media aritmética
// Andres Benjamin Antelis Moreno A01637683
// 04/11/2022
#include <iostream>
using namespace std;

int main(){
    int x=0;
    int num=0;
    float sum=0;
    cout<<"Ingresa la cantidad de numeros que quieras sacar la media: ";
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<"Ingrese un numero: ";
        cin>>x;
        sum=sum+x;
    }
    cout<<"La media aritmetica es: "<<sum/num;
}