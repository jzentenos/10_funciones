#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
double Hip(float, float );
int main(){
	float a, b;
	double h=0;
	cout<<"\tPrograma que calcula la Hipotenusa"<<endl;
	cout<<"Ingrese el cateto adyacente: "; cin>>a;
	if(a>0){
		cout<<"Ingrese el cateto opuesto: "; cin>>b;
		if(b>0){
			h=Hip(a, b);
			cout<<"La hipotenusa es: "<<h<<endl;
			system("pause");
		}
		else{
			cout<<"Cateto Opuesto invalido"<<endl;
			system("pause");
		}
	}
	else{
		cout<<"Cateto Adyacente invalido"<<endl;
		system("pause");
	}

	return 0;
}
double Hip(float ca,float co){
	double hipo=0;
	hipo= sqrt( pow(ca,2) + pow(co, 2) );
	return hipo;
}
