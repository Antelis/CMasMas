#include<iostream>
#include<cstdlib>
#include <iomanip>
using namespace std;

//Mostrar posicion y valor de dato mas grande
int main(){
    int array[25];
    int random;
    int mogus;
    int numba;
    int control=0;
    int len = sizeof(array)/sizeof(array[0]);
    srand(time(0));
    for(int i=0;i<25;i++){
	    random =(rand() % 501);
        array[i]=random;
        cout <<i+1<<"-"<<array[i]<<endl;

            if(array[i]>control){
                mogus=i;
                control=array[i];
            }
            else{
                //mogus=i;
                //numba=array[i];
            }
    }
    cout<<"El numero mas largo de este arreglo es: "<<control<<" en la posicion: "<<mogus+1<<endl;
    return 0;
}