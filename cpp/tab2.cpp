/*
 * tab2.cpp
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
#include <iomanip>
using namespace std;
#define w 5
#define k 10
int main(int argc, char **argv)
{
	int tab1[w][k];
	int i, j;
	srand(time(NULL));
	int n;
	cout << "podaj n: ";
	cin >> n;
	for(i = 1; i<w; i++){
		for(j = 0; j<k;j++){
			tab1[i][j] = (rand()%n+1);
			cout << tab1[i][j]<< " ";			
		}
		cout << endl;
		
		
			
	}
	
	return 0;
}
