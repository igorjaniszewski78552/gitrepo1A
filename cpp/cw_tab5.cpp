/*
 * cw_tab5.cxx
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
#define rozmiar 10
#include <cstring>
int main(int argc, char **argv)
{
	char tekst[rozmiar];
	cout <<"Podaj wyrazy: "<<endl;
	cin.getline(tekst, rozmiar);
	int j = 0;
		for (j =0 ; j <(int)strlen(tekst); j++){
	if(tekst[j] == 32){
		cout<<(char)(tekst[j]);
}
	else if(tekst[j]>95 && tekst[j] < 127){
	  	cout<<(char)(tekst[j]-32);
	}
	else if(tekst[j]>40 && tekst[j] < 91){
	  	cout<<(char)(tekst[j]+32);
	}
	}
	return 0;
}

