#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
//Funcion que elige un valor aleatorio
void eleccion(int &comp);
//Funcion que imprime la eleccion de la computadora
void PPT(int elec);
//Funcion que determina el resultado
int ganador(int user, int comp);
//Funcion principal
int main(){
	srand(time(0)); //Valores diferentes en cada ejecucion
	int user, comp;
	int ccomp=0, cuser=0;
	do{
		system("cls");
		cout<<"\n\tPiedra, Papel o Tijera"<<endl;
		cout<<"1. Piedra"<<endl;
		cout<<"2. Papel"<<endl;
		cout<<"3. Tijera"<<endl;
		cout<<"Opcion: "; cin>>user;
		cout<<endl; 	
		if(user<1 || user>3){
			cout<<"Opcion INVALIDA"<<endl;
			system("pause");
		}
		//Genera la eleccion de la computadora
		eleccion(comp);
		//Opciones elegidas
		cout<<"Elegiste: "; PPT(user);
		cout<<"\nComputadora eligio: "; PPT(comp);
		cout<<"\n";
		int temp=ganador(user, comp);
		if(temp==0){
			cout<<"EMPATE"<<endl;
		}
		else if(temp==1){
			cout<<"GANASTE"<<endl;
			cuser++;
		}
		else if(temp== 2){
			cout<<"PERDISTE"<<endl;
			ccomp++;
		}
		cout<<"\tContador:"<<endl;
		cout<<"Usuario: "<<cuser<<endl;
		cout<<"Computadora: "<<ccomp<<endl;
		cout<<"\n";
		
		system("pause");
		
	}while(cuser<3 && ccomp<3);
	
	system("cls");
	if(cuser==3){
		cout<<"Felicidades ganaste el juego!"<<endl;
		system("pause");
	}
	else{
		cout<<"Suerte a la proxima, perdiste el juego!"<<endl;
		system("pause");
	}
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
int ganador(int user, int comp){
	if (user == comp) {
        return 0; // Empate
    } else if ((user == 1 && comp == 3) || (user == 2 && comp == 1) || (user == 3 && comp == 2)) {
        return 1; // Usuario gana
    } else {
        return 2; // Computadora gana
    }
}
