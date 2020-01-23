/*
 * zad_12_110.cpp
 * 
 * Copyright 2020  <>
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
void zamien(int &a, int &b){
    int c = a;
    a = b;
    b = c;
} 
void boubble_sort(int tab[], int n){
    int ile = 0;
    for (int i=n-1; i>0; i--){
        for (int j = 0; j<i; j++){
            //cout<<"Indeks j = "<<j<<" ";
            if (tab[j] < tab[j + 1]){
                zamien(tab[j], tab[j+1]);
                ile++;
            }
        }
        //cout<<endl;
    }
}

int main(int argc, char **argv)
{
	int tab[50];
	int p = 0;
	int j = 1;
	int i = 1;
cout << "Podaj liczbę p"<<endl;
cin  >> p; 	
for (int i = 1; i <= p; i++)
{
	if (p%i == 0)
	{
	
	cout<< i<<endl;
	
	}
	else
		continue;
	}
	return 0;
}

