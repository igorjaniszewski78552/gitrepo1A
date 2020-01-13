/*
 * cwiczenie2.cpp
 * 
 * 
 * 
 */


#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
	int silnia, n, i;
	cout<< "Podaj wartość n";
	cin >> n;
	silnia = 1;
	i = 1;
	do{
		silnia *= i;
		i += 1;
	}while(i > n);
	cout <<silnia;
	return 0;
}

