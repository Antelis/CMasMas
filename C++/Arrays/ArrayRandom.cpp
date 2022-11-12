#include<iostream>
#include<cstdlib>
#include <iomanip>
using namespace std;

int main(){
    int array[50];
    float count=0;
    int random;
    int len = sizeof(array)/sizeof(array[0]);
    srand(time(0));
    for(int i=0;i<50;i++){
	    random =(rand() % 201);
        array[i]=random;
        count=count+random;
    }
    float rant=count/50;
    cout << fixed;
    cout << setprecision(2);
    cout <<"El promedio de los numeros aleatorios de un array de tamano "<<len<<" es: "<<rant<<endl;
    return 0;
}