#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
void Cal_rai(float, float, float);
int main(){
	float a, b, c;
	cout<<"\tEcuacion Cuadratica: aX^2 + bx + c = 0"<<endl;
	cout<<"Ingrese el valor de a: "; cin>>a;
	if(a==0){
		cout<<"El valor de a no puede ser CERO"<<endl;
		system("pause");
	}
	else{
		cout<<"Ingrese el valor de b: "; cin>>b;
		cout<<"Ingrese el valor de c: "; cin>>c;
		system("cls");
		cout<<"Ecuacion: ("<<a<<")x^2 + ("<<b<<")x + ("<<c<<") "<<endl;
		Cal_rai(a, b, c);
		system("pause");
	}
	return 0;
} 
void Cal_rai(float a, float b, float c){
	float d, x1, x2;
	d= pow(b, 2) - 4*a*c;
	if(d>0){
		cout<<"\tRaices Diferentes"<<endl;		
		x1= ( -b + sqrt(d) ) / (2*a);
		x2= ( -b - sqrt(d) ) / (2*a);
		cout<<"Raiz 1: "<<x1<<endl;
		cout<<"Raiz 2: "<<x2<<endl;	
	}
	else if(d==0){
		cout<<"\tRaices iguales"<<endl;
		x1= ( -b + sqrt(d) ) / (2*a);
		cout<<"Raiz 1: "<<x1<<endl;
		cout<<"Raiz 2: "<<x1<<endl;	
	}
	else{
		cout<<"\tRaices Imaginarias"<<endl;
		cout<<"NO TIENE SOLUCION EN LOS REALES"<<endl;
	}
	
	
}
