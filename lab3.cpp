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
		int jugada1;
		for (int i = 5; i >=0 ; --i)
		{
			if(tablero[i][jugada]==0){
				tablero[i][jugada]=1;
				jugada1=i;
				i=-1;
			}
		}
		int victoria=0;
		for (int i = 0; i < 4; ++i)
		{
			int x=jugada1-i,y=jugada+i;	
			if(x>-1&&x<6&&y>-1&&y<7){
				if(tablero[x][y]==1){
					++victoria;
				}
				if(tablero[x-1][y+1]==0){
					i=5;
					int x1=x,y1=y;
					victoria=0;
					for (int j = 0; j < 4; ++j)
					{
						int x1=x+j,y1=y-j;
						if(x1>-1&&x1<6&&y1>-1&&y1<7){
							if(tablero[x1][y1]==1){
								++victoria;
							}
						}
					}
				}
			}
		}
		if(victoria!=4){
			victoria=0;
			for (int i = 0; i < 4; ++i)
			{
				int x=jugada1-i,y=jugada-i;	
				if(x>-1&&x<6&&y>-1&&y<7){
					if(tablero[x][y]==1){
						++victoria;
					}
					if(tablero[x-1][y-1]==0){
						i=5;
						int x1=x,y1=y;
						victoria=0;
						for (int j = 0; j < 4; ++j)
						{
							int x1=x+j,y1=y+j;
							if(x1>-1&&x1<6&&y1>-1&&y1<7){
								if(tablero[x1][y1]==1){
									++victoria;
								}
							}
						}
					}
				}
			}
		}
		if(victoria!=4){
			victoria=0;
			for (int i = 0; i < 4; ++i)
			{
				int x=jugada1+i,y=jugada;			
				if(x>-1&&x<6&&y>-1&&y<7){
					if(tablero[x][y]==1){
						++victoria;
					}
				}
			}
		}

		if(victoria==4){
			estado=true;
			cout<<"gano el jugador1"<<endl;
		}		
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
	}
	return 0;
}
