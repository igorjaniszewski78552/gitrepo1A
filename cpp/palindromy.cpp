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

using namespace std;
#include <iostream>
#include <cstring>
bool czy_palindrom(char tab[]){
	int rozmiar = strlen(tab);
	int n = 0;
cout << rozmiar;
	for (int i = 0; i < rozmiar / 2; i++){
		if (i == rozmiar - i -1){
			n += 1;
	}
	else if(i == rozmiar){
		
		
	}
	else{
		n = 0;
	} 
	
	}
	if (n == rozmiar){
		cout <<"to palindrom";
}
else{
	cout<< "to nie palidnrom";
}
return n;
}

int main(int argc, char **argv)
{
	int r = 20;
	char napis[r];
	cin.getline(napis, 20);
	cout << napis;
	czy_palindrom(napis);
	
	return 0;
}

