/*
 * silnia.cpp
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

long int silnia_it(int n){
	
	long int silnia = 1;
	for (int i=2; i < n+1; i++){
		silnia = silnia * i;
		
		
	}
	return silnia;
	
}
long int silnia_re(int n){
	if(n == 0){
	return 1;}
	else{
		return silnia_re(n-1)* n;
	} 
	
	
	
}


int main(int argc, char **argv)
{
	int n;
	cout<<"podaj liczbę naturalną"<<endl;
	cin >> n;
	cout<<"silnia :"<< silnia_it(n)<<endl;
	cout<<"silnia :"<< silnia_it(n)<<endl;
	return 0;
}

