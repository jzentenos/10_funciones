#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main(){
	float ca, co, hipo;
	cout<<"Ingrese el cateto adyacente: "; cin>>ca;
	cout<<"Ingrese el cateto opuesto: "; cin>>co;
	hipo= sqrt( pow(ca,2) + pow(co, 2) );
	cout<<"La hipotenusa es: "<<hipo<<endl;
	system("pause");
	return 0;
}
