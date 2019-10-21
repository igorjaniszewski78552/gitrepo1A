/*
 * znaki.cpp
 * znakiem konczącym tablice znakową jest \0
 */
 using namespace std;


#include <iostream>

void  ascii(){
	int i = 0;
	for(i =  65; i < 91; i++){
		cout << i << "-" << char(i) << endl; 
	}
}


void litery2liczby (char tabzn[], int rozmiar){
		for(int i =  0; i < rozmiar; i++){
		cout << tabzn[i] << "-" << (int)tabzn[i] << endl; 
	
}
}

int main(int argc, char **argv)
{
		int rozmiar =13;
		char napis[rozmiar] = "Kot ma Alee";
		ascii();
		litery2liczby(napis, rozmiar);
	return 0;
}

