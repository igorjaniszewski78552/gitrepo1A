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




long int potega_it(int n, float x){
	
	float potega = 1;
	for (int i=0; i < n; i++){
		potega = potega * x;
		
		
	}
	return potega;
	
}
float potega_re(int n, float x){
	if(x == 0){
	return 1;}
	else{
		return potega_re(n-1, n)* x;
	} 
	
	
	
}


int main(int argc, char **argv)
{
	int n;
	float x;
	cout<<"podaj podstawe"<<endl;
	cin >> x;
	cout << "podaj wykładnik"<<endl;
	cin >> n;
	cout<<"potega :"<< potega_it(n, x)<<endl;
	cout<<"potega :"<< potega_it(n, x)<<endl;
	return 0;
}

