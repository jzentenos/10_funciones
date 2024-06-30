#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int n,cant, alea;
	
	cout<<"Ingrese el valor MAX: "; cin>>n;
	cout<<"Ingrese la cantidad de numeros a generar: "; cin>>cant;
	cout<<"\tValores desde 0 hasta "<<n<<endl;
	
	for(int i=1; i<=cant; i++){
		alea= 0 + rand()%(n+1);
		cout<<i<<".- "<<alea<<endl;
	}
	
	return 0;
}
