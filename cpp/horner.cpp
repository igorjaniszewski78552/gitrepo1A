/*
 * horner.cpp
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
using namespace  std;

void drukujw(int n, float tbwsp[]){
	for (int i= 0; i < n; i++){
	cout << tbwsp[i]<<"x^"<< n - i<<" + ";
}
	cout << tbwsp[n];
}

float horner_it(int n, float tbwsp[], float x){
	
	int i;
	float wynik = tbwsp[0];
	for (i = 1; i < n+1; i++){
		wynik = wynik * x + tbwsp[i];
		
		
	}
	return wynik;
	
}

float horner_re(int n, float tbwsp[], float x){
	if (n == 0)
	return tbwsp[0];
	else
		return horner_re(n-1, tbwsp, x) * x + tbwsp[n];
	
}


int main(int argc, char **argv)
{
	int n = 0;
	float *tbwsp;
	float x;
	cout <<"podaj stopieµ: ";
	cin >> n;
	tbwsp = new float [n+1];
	cout << "Podaj argument: "; cin>> x; 
	
	
	for (int i=0; i<n+1; i++){
		cout <<"Podaj współczynnik przy potędze: "<< n-i << " :";
		cin >> tbwsp[i];
	
	} 
	cout<< "Wartość wielomianu o postaci: ";
	drukujw(n , tbwsp);
	cout << endl;
	cout << "wynik to: "<< horner_it(n, tbwsp, x)<< endl;
	cout << "wynik to: "<< horner_re(n, tbwsp, x)<< endl;
	return 0;
}

