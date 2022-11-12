#include <iostream>
using namespace std;

int main(){
    int a=1;
    int d=3;
    int n=25;
    int sum=0;
    int sum2=0;
    for(int i=1; i<1000; i++){
        sum2=sum+(a+(n-1)*d);
        sum=sum+(a+(n-1)*d);
        cout<<"El resultado de la suma numero "<<i<<" es igual a: " <<sum2<<endl;
    }
    cout<<"El resultado final es: " <<sum<<endl;


}