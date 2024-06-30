#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
	int n,cant, alea;
	//Genera numeros diferentes en cada ejecución
	srand(time(NULL));
	cout<<"Ingrese el valor MAX: "; cin>>n;
	//Comprobar valor MAX mayor a 0
	if(n>0){
		cout<<"Ingrese la cantidad de numeros a generar: "; cin>>cant;
		//Comprobar cantidad de numeros a generar mayor a 0
		if(cant>0){
			cout<<"\tValores desde 0 hasta "<<n<<endl;
			for(int i=1; i<=cant; i++){
			alea= 0 + rand()%(n+1);
			cout<<i<<".- "<<alea<<endl;
			}
			system("pause");
		}
		else{
			cout<<"La cantidad de numeros a generar es INVALIDO"<<endl;
			system("pause");
		}		
	}
	else{
		cout<<"El valor MAX tiene que ser mayor a 0"<<endl;
		system("pause");
	}
	return 0;
}
