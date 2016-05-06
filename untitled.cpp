#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main(int argc, char const *argv[])
{
	int size1=7;
    int size2=6;
    string[size1][size2] tablero;
    for (int i = 0; i < size1; ++i){
    	for (int j = 0; j < size2; ++i){
    		tablero[i][j]="O";
    	}
    }	
    for (int i = 0; i < size1; ++i){
    	for (int j = 0; j < size2; ++i){
    		cout<<tablero[i][j]<<"\t";
    	}
    	cout<<endl;
    }
	return 0;
}