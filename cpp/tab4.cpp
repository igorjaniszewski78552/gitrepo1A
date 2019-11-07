/*
 * tab4.ppx
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

#include <iomanip>
#include <iostream>
using namespace std;
#define N 5
#define M 7
int main(int argc, char **argv)
{
		int tab1[N][M];
	int i, j;
	float r;
	cout << "podaj wartość, o którą zwiększać się będą liczby: ";
	cin >> r;
	float a;
	cout << "podaj pierwszy element: ";
	cin >> a;
	
	for(i = 0; i<N; i++){
		for(j = 0; j < M ; j++){
			tab1[i][j] = a;
			a += r;
			cout << tab1[i][j] << " ";
		}
			cout << endl;
	
}
	return 0;
}

