#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
	const int size1=7;
	const int size2=6;
	bool estado=false;
	int tablero[size2][size1]={0};
	for (int i = 0; i < 7; ++i)
	{
		cout<<i<<"\t";
	}

	cout<<endl;
	cout<<"---------------------------------------------------"<<endl;
	for (int i = 0; i < 6; ++i){
		for (int j = 0; j < 7; ++j){
			cout<<tablero[i][j]<<"\t";
		}
		cout<<endl;
	}
	while(!estado){
		int jugada=-1;
		while(jugada<0||jugada>6){
			cout<<"jugador 1 ingrese la casilla en la que desea lanzar su pieza"<<endl;
			cin>>jugada;
			if (jugada<0||jugada>6)
			{
				cout<<"jugada no valida"<<endl;
			}
		}
		for (int i = 5; i >=0 ; --i)
		{
			if(tablero[i][jugada]==0){
				tablero[i][jugada]=1;
				i=-1;
			}
		}
		for (int i = 0; i < 6; ++i){
			for (int j = 0; j < 7; ++j){
				cout<<tablero[i][j]<<"\t";
			}
			cout<<endl;
    	}
    }
	return 0;
}
