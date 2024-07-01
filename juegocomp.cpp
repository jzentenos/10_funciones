#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
//Funcion que elige un valor aleatorio
void eleccion(int &comp);
//Funcion que imprime la eleccion de la computadora
void PPT(int elec);
//Funcion que determina el resultado
void ganador(int user, int comp);
//Funcion principal
int main(){
	srand(time(NULL)); //Valores diferentes en cada ejecucion
	int user, comp;
	int cont=0;
	do{
		system("cls");
		cout<<"\tPiedra, Papel o Tijera"<<endl;
		cout<<"1. Piedra"<<endl;
		cout<<"2. Papel"<<endl;
		cout<<"3. Tijera"<<endl;
		cout<<"Eleccion: "; cin>>user; 	
		if(user<1 || user>3){
			cout<<"Opcion INVALIDA"<<endl;
		}
		
	}while(cont<4);
	return 0;
}
void eleccion(int &comp){
	comp= 1+ rand()% 3; // Numero entre 1 y 3 
}
void PPT(const int elec){
	switch(elec){
		case 1: 
			cout<<"Piedra";
			break;
		case 2: 
			cout<<"Papel";
			break;
		case 3: 
			cout<<"Tijera";
			break;
	}
	
}
void ganador(int user, int comp){
	if(user==comp){
		cout<<"EMPATE"<<endl;
	}
	if( (user==1 && comp==3) || (user==2 && comp==1) || (user==3 && comp==2)){
		cout<"GANASTE";
	}
	else{
		cout<<"PERDISTE";
	}
}
