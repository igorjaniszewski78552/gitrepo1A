/*
 * funkcje2.cpp
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

using namespace std;

#include <iostream>

int b = 10;

int dodaj(){
	int a = 0;
	cout << a << endl;
	int b = 50;
	cout << "b = " << b << endl;
	return 0;
	
}


int dodaj2(int a, int b){
	//a = 20;
//	cout << a << endl;
	//b = 50;
	//cout << "b = " << b << endl;
	//cout << a + b << endl;
	return a+b;
}


void modyfikuj(int &x, int y, int &z){ // usostępnia z jako funkcje lokalnądo modyfikacji
	z = x + y + 50;
	cout << &z << endl;
	x =2000;
	y =2000;
}


int main(int argc, char **argv)
{
	int a = 1;
	b = 200; //zmienna lokalna
	cout << a << endl;
	cout << b << endl;
	int suma = dodaj2(a, b);

	cout << "Suma: " << suma << endl;

	modyfikuj(a, b, suma);
	cout << "Suma: " << suma << endl;

	cout << a<< endl;
	cout << a<< endl;
	return 0;
}

