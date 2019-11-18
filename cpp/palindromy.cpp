/*
 * palindromy.cpp
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
#include <cstring>

using namespace std;



bool czy_palindrom(char tab[]){
	int rozmiar = strlen(tab) - 1;
	for(int i = 0; i < rozmiar/2; i++){
		if(tab[i] == tab[rozmiar-1 - i])
			;
		else
			return false;
			}
		
		return true;
	}

void usunSpace(char tab1[], char tab2[]){
	int rozmiar = strlen(tab1);
	for(int i = 0; i < rozmiar; i++){
		if(tab1[i] != ' '){
			tab2[i] = tab1[i];
			}
		
	}
}
bool czy_palindrom2(char tab[]){
	int rozmiar = strlen(tab);
	for(int i = 0; i < rozmiar/2; i++){
		if(tab[i] == ' ') i++;
		if(tab[i] == tab[rozmiar- 1 - i])
			;
		else
			return false;
			}
		
		return true;
	}
int main(int argc, char **argv)
{
	int r = 20;
	char napis1[r];
	char napis2[r];
	cin.getline(napis1, 20);
	usunSpace(napis1, napis2);
	cout << napis2 << endl;
	cout << strlen(napis2) << endl;
	if(czy_palindrom(napis2))
		cout << "To palindrom!" << endl;
		else{
			cout << "To nie palindrom" << endl;
	}
	return 0;
}

