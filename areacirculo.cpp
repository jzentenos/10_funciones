#include<iostream>
#include<cmath>
//Se define el valor de PI en Dev-C++
#define M_PI 3.14159265358979323846
using namespace std;
double AreaC(double);
int main(){
    double a, r;
    cout<<"Ingrese el radio del circulo: "; cin>>r;
    a= AreaC(r); // Llamdo a la funcion AreaC
    cout<<"El area del circulo es: "<<a<<endl;
    return 0;
}
//Funcion Area del circulo
double AreaC(double rad){
	double pi=M_PI, area;
	area= pi * pow(rad, 2);
	return area;
}
