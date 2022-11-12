#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n=0;
    int x;
    int a=0;
    float ari=1;
    float geo=0;
    cout<<"Ingresa numeros para calcular su media armonica y geometric (Ingrese 0 para salir)!!! "<<endl;

    while(a==0){
        cout<<"Ingrese un numero: ";
        cin>>x;
        if(x==0){
            //ari=exp(log(ari)/n);
            geo=n/geo;
            cout<<"La media geometrica es: "<<geo<<endl;
            cout<<"La media aritmetica es: "<<ari<<endl;
            a=1;
        }
        else if(x!=0){
            n=n+1;
            ari=ari*x;
            geo=geo+(1./x);//Como el punto arregla esto, no me servia pero por pensar igual que matlab sirvio, sin punto no daba bien el resultado pero asi ya quedo//
        }
        else{
            cout<<"Numero no valido, intente de nuevo ";
        }
    }
}