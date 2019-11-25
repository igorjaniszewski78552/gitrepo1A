/*
 * ciągfibonacciego.cpp
 * 
 * Copyright 2019  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */



#include <iostream>
using namespace std;

int fibonacci_it(int n){
	int a = 0; //Fn-1
	int b = 1; //Fn-2
	int wynik = 0;
	if (n == 0) return 0;
	if (n == 1) return 1;
	for(int i = 0; i<n; i++){
		wynik = a + b; //1//2//3
		b = a; //1//1//2
		a = wynik; //1//2//3
	}
	return wynik;
	}

int main(int argc, char **argv)
{
	int r;
	cout << "Podaj ile liczb ciągu wypisać: ";
	cin >> r;
	for(int i = 0; i < r+1; i++){
	cout << i <<": fib(" << fibonacci_it(i - 2) << ", " << fibonacci_it(i - 1) << ") = " << fibonacci_it(i) << endl;
	}
	return 0;
}
}

