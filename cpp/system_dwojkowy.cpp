/*
 * system_dwojkowy.cpp
 * 
 * 
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n = 2;
	int i = 0;
	int m= 0;
	cout <<"Podaj liczbę w systemie dziesiętnym";
	cin >> i;
	while ( i = 0){
		do{
			n*=2;
			if(n >= i)
			{n/2; i -= n;cout<<"1";}
		}while (n < 0;);
		
	}
	return 0;
}

