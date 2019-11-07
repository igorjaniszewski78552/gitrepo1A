/*
 * tab5.cpp
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
int main(int argc, char **argv)
{
	int b = 0;
	int tab[20];
	int n = 20;
	srand(time(NULL));
	cout << "podaj liczbę, którą chcesz znaleźć; "<< endl;
	int a = 0;
	cin >> a;
		for(int i = 0; i<21; i++){
			tab[i]= rand()%n+1;
			cout << tab [i]<<" ";
		}
		
		for(int j = 0; j<21; j ++)
		{
		if(a == tab[j]){
		 b += 1 ;
		}
		}
		cout << b<<endl;
	return 0;
}

