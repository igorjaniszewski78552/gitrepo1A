/*
 * szukaj1.cpp
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
int szukaj_it(int liczby[], int ile, int n){
	int indeks = -1;
	for (int i = 0; i<ile ; i++){
	if (liczby[i] == n) {return i;}
}
	return indeks;
}
int szukaj_re(int liczby[], int lewy, int prawy, int n){
	if (lewy > prawy){
					cout << "elementu nie znaleziono" << endl;
return -1;}
	else{
		if(liczby[lewy]==n){
			cout << "element znaleziono" << endl;
			return  lewy;
			
		}
		else{
			szukaj_re(liczby, lewy+1, prawy, n);
	}}
		
	
	
	
	
}
int szukaj_re2(int liczby[], int lewy, int prawy, int n){
	if (lewy > prawy){
		cout << "elementu nie znaleziono" << endl;
		return -1;
		}
		
	else{
		if(liczby[prawy]==n){
			cout << "element znaleziono" << endl;
			return  prawy;
			
		}
		else{
			szukaj_re(liczby, prawy+1, lewy, n);
	}}
		
	
	
	
	
}

int main(int argc, char **argv)
{
	int liczby[] = {3, 8, 3, 9, 10, 45, 37};
	int n;
	cout << "Podaj szukany element: "<< endl;
	cin >> n;
	int indeks = szukaj_re(liczby, 1, 7, n);
	if (indeks > -1)
	cout<< liczby[indeks] << endl;
	
	return 0;
}

