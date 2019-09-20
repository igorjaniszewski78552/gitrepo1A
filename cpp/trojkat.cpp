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

int main()
{
	int a, b, c, m;
	cout << "Podaj dlugosc  boku : ";
	cin >> a;
	cout << "Podaj dlugosc  boku : ";
	cin >> b;
	cout << "Podaj dlugosc  boku : ";
	cin >> c;
	if (a + b <= c) {
	cout << "nie mozna zbudowac trojkata";
}
	else if (a + c <= b){
	cout <<"nie mozna zbudowac trojkata";
}
	else if (b + c <= a){
	cout << "nie mozna zbudowac trojkata";
}
	else{
	cout << "mozna zbudowac trojkat";
}
        if((a>b)&&(a>c)){
            m = a;
            a = c;
        }
        else if ((b > a) && (b > c)){
            m = b;
            b = c;
        }
        else {
            m = c;
        }
            if (m == sqrt(a*a + b*b)){
            cout << "  jest to trojkat prostokatny";


}
    return 0;
}

