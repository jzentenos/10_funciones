#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
	int n,cant, alea;
	srand(time(NULL));
	cout<<"Ingrese el valor MAX: "; cin>>n;
	
	if(n>0){
		cout<<"Ingrese la cantidad de numeros a generar: "; cin>>cant;
		if(cant>0){
			cout<<"\tValores desde 0 hasta "<<n<<endl;
			for(int i=1; i<=cant; i++){
			alea= 0 + rand()%(n+1);
			cout<<i<<".- "<<alea<<endl;
			}
		}
		else{
			cout<<"La cantidad de numeros a generar es INVALIDO"<<endl;
		}		
	}
	else{
		cout<<"El valor MAX tiene que ser mayor a 0"<<endl;
	}
	return 0;
}
