/*
 * bez nazwy.cxx
 * 
 * Copyright 2019  <>
 * napisz program, który pobiera od użytkownika liczby i sprawdza, czy można zbudować z nich trójkąt. Program powinien wyprowadzićodpowiedzni komunikat
 * 
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
	int a, b, c;
	cout << "Podaj długość  boku : ";
	cin >> a;
	cout << "Podaj długość  boku : ";
	cin >> b;
	cout << "Podaj długość  boku : ";
	cin >> c;
	if (a + b < c) {
	cout << "nie można zbudować trójkąta";
}
	else if (a + c < b){
	cout <<"nie można zbudować trójkąta";
}
	else if (b + c < b){
	cout << "nie można zbudować trójkąta";
}
	else{
	cout << "można zbuddować trójkąt";
}
	if (c == sqrt(a*a + b*b)){
	cout << "  jest to trójkąt prostokątny";


}  
	return 0;
}
