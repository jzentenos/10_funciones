#include<iostream>
using namespace std;

int main(){
	int op;
	cout<<"\tCajero automtico"<<endl;
	cout<<"1. Despositar"<<endl;
	cout<<"2. Retirar"<<endl;
	cout<<"3. Mostrar saldo"<<endl;
	cout<<"0. Salir"<<endl;
	cout<<"Elija una opcion: "; cin>>op;
	switch(op){
		case 0:
			cout<<"Saliendo  ..."<<endl;
			system("pause");
		break;
		default:
			cout<<"Opcion invalida"<<endl;
			system("pause");
		break;
	}
	return 0;
}