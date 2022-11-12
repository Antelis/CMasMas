// Diferentes programas UwUs
// Andres Benjamin Antelis Moreno A01637683
// 02/11/2022

#include <iostream>
#include <cmath>
using namespace std;

// Calcular el IMC (w/h^2), pedir peso & altura, & regresar el IMC
int main() {
    float a;
    float w;
    cout << "Ingresa tu altura: ";
    cin>>a;
    cout << "Ingresa tu peso: ";
    cin>>w;
    float imc = w/(pow(a,2));
    cout<<"Tu IMC es: "<<imc<< endl;
    return 5;
}

// Celcius a Farenheit
// #include <iomanip>

// int main(){

//     float Celc;
//     cout <<"Ingrese la temperatura en celcius: ";
//     cin>>Celc; 
//     float far=(Celc * 9/5) + 32;
//     std::cout << std::fixed;
//     std::cout << std::setprecision(2);
//     std::cout << far;
//     std::cout << Celc;
//     cout<<Celc<<" Grados centigrados equivalen a "<<far<<" grados farenheit";
//     return 0;
// }


// Edad en otros planetas segun su rotacion alrededor del
// int main(){
//     int edad;
//     int mer=88;
//     int ven=225;
//     int juv=4380;
//     int sat=10767;
//     cout<<"Ingresa tu edad: ";
//     cin>>edad;
//     cout<<"Tu edad Mercuriana seria: "<<(edad*365)/mer<<" años"<< endl;
//     cout<<"Tu edad Venusiana seria: "<<(edad*365)/ven<<" años"<< endl;
//     cout<<"Tu edad Juviana seria: "<<(edad*365)/juv<<" años"<< endl;
//     cout<<"Tu edad Saturiana seria: "<<(edad*365)/sat<<" años"<< endl;
// }

//Ecuaciones cuadraticas
// #include<cmath>
// int main(){
//     float a;
//     float b;
//     float c;
//     cout<<"Despeja el valor de x usando la formula: Ax^2+Bx+C=0"<< endl;
//     cout<<"Ingresa el valor de A (No puede ser 0): ";
//     cin>>a;
//     cout<<"Ingresa el valor de B: ";
//     cin>>b;
//     cout<<"Ingresa el valor de C: ";
//     cin>>c;
//     double X1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
//     double X2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
//     cout<<"El valor de x1 es: "<<X1<<" y el valor de x2 es: "<<X2<< endl;
// }

//

//P euros con una tasa de interés de R por 100 compuesto anual, en N años 
// #include<cmath>
// int main(){
//     float p;
//     float r;
//     int n;
//     cout<<"Ingresa la cantidad de euros: ";
//     cin>>p;
//     cout<<"Ingresa la tasa de interes: ";
//     cin>>r;
//     cout<<"Ingresa la cantidad de años: ";
//     cin>>n;   
//     float euros=(p*(1-(pow(r/100,n+1))))/(1-(r/100));
//     cout<<"La cantidad seria de "<<euros<< endl;
// }