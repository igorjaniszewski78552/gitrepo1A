/*
 * tablica.cpp
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


void pobierzOceny(int t[], int r){
	
	cout << "podaj 5 ocen:        "<< endl;
		int i;
	for(i=0; i<r;i++){
		cin >>  t[i];
		
	} 
	}
	
	
void DrukujTab(int t[], int r){
	
		int i;
	for(i=0; i<r;i++){
		cout <<  t[i]<<endl;
		
	} 
	}


int main(int argc, char **argv)
{

	int rozmiar = 5;
	int tablica[rozmiar];
	//tablica[0] = 300;
	//tablica[5] = 123;
	int i = 0;
	cout<< tablica << endl;
pobierzOceny(tablica, rozmiar);
DrukujTab(tablica, rozmiar);

	for (i = 0; i < rozmiar; i++ ){
		cout << tablica[rozmiar - ( i + 1 ) ]<< " ";
	}
	return 0;
}

