#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int n,cant, alea;
	
	cout<<"Ingrese el valor MAX: "; cin>>n;
	
	if(n>0){
		cout<<"Ingrese la cantidad de numeros a generar: "; cin>>cant;
		cout<<"\tValores desde 0 hasta "<<n<<endl;
		for(int i=1; i<=cant; i++){
			alea= 0 + rand()%(n+1);
			cout<<i<<".- "<<alea<<endl;
		}		
	}
	else{
		cout<<"El valor MAX tiene que ser mayor a 0"<<endl;
	}
	return 0;
}
