#include<iostream>
#include <cstring>
using namespace std;

int main(){
    string frase="Pensamiento computacional orientado a objetos";
    int len=frase.size();
    cout<<"La longitud de la frase es "<<len<<endl;
    char amorgos[len+1];
    strcpy(amorgos, frase.c_str());
    for(int i=0;i<len;i++){
        cout<<amorgos[i]<<endl;
    }
    return 0;
}