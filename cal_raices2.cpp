#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
//Funcion para calcular las raices de una ecuacion cuadratica
void calcularRaices(float, float, float, float &, float &, bool &, bool &);
int main(){
	//Se define las variables a, b y c
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
	//Se define las variables a usar en paso de parametro por referencia
	float x1, x2;
	bool sr, si;	
		calcularRaices(a, b, c, x1, x2, sr, si); //Llamado a la funcion
	//Verificar que tipo de raiz es	
        if(sr){
            if(si){
                cout<<"\tRaices iguales"<<endl;
                cout<<"Raiz 1: "<<x1<<endl;
                cout<<"Raiz 2: "<<x1<<endl;
            } 
			else{
                cout<< "\tRaices Diferentes" << endl;
                cout<< "Raiz 1: " << x1 << endl;
                cout<< "Raiz 2: " << x2 << endl;
            }
        } 
		else{
            cout<<"\tRaices Imaginarias"<<endl;
            cout<< "NO TIENE SOLUCION EN LOS REALES"<<endl;
        }
		system("pause");
	}
	return 0;
} 
//sr: Son raices Reales, si: Son raices Iguales
void calcularRaices(float a, float b, float c, float &x1, float &x2, bool &sr, bool &si){
	float d;
	d= pow(b, 2) - 4*a*c;
	if(d>0){ //Raices reales y diferentes
		sr=true;
		si=false;	
		x1= ( -b + sqrt(d) ) / (2*a);
		x2= ( -b - sqrt(d) ) / (2*a);
	}
	else if(d==0){ //Raices reales e iguales
		sr=true;
		si=true;
		x1= ( -b ) / (2*a);
		x2=x1;	
	}
	else{ //Raices imaginarias
		sr=false;
		si=false;
	}
	
}
