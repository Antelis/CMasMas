// Adivinar un numero magico entre 1 y 100
// Andres Benjamin Antelis Moreno A01637683
// 04/11/2022
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    int magicnum;
    int counting=1;
    srand(time(NULL));
    int num = rand() % 100 + 1;
    while(magicnum!=num){
    cout<<"Ingresa un numero para adivinar, entre 1 y 100: ";
    cin>>magicnum;
        if(magicnum==num){
            cout<<"Felicidades, atinaste el numero, el numero era "<<num<<" ,atinaste en "<<counting<<" intentos";
        }
        else if (num>magicnum){
            cout<<"El numero adivinado es menor al correcto, intente de nuevo"<< endl;
            counting=counting+1;
        }
        else if (num<magicnum){
            cout<<"El numero adivinado es mayor al correcto, intente de nuevo"<< endl;
            counting=counting+1;
        }
    }

    return 0;
}