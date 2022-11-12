#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float Celc;
    int conv;
    int saltos;
    cout <<"Ingrese la temperatura en celcius: ";
    cin>>Celc;
    cout <<"Ingrese la cantidad de saltos: ";
    cin>>saltos;
    cout <<"Ingrese el aumento por saltos: ";
    cin>>conv; 

    for(int i=0;i<saltos;saltos){
    Celc=Celc+conv;
    float far=(Celc * 9/5) + 32;
    cout<<Celc<<" Grados centigrados equivalen a "<<far<<" grados farenheit"<< endl;
    far=far+conv;
    i=i+1;
    }
    return 0;
}