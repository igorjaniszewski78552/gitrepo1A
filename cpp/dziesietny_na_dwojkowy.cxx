/*
 * dziesietny_na_dwojkowy.cxx
 * 
 * Copyright 2020  <>
 * 

 * 
 */


#include <iostream>
using namespace std;
void dziesietnynadwojkowy(int i, int n, int m){
		do{
			n*=2;

		}while (n < i);
		//cout <<n<<endl;
		n/=2;
        //cout <<n<<endl;
        //i = 61 n = 64
        i -= n;cout<<"1";n/=2;
		//cout <<i<< endl<< n<<endl;
    for (m=n;m > 0;n/=2){//cout <<i<< endl<< n<<endl;

        if ( i >=n){cout<<"1";//<<endl
                i -=n;

        //cout <<"i= "<<i<< endl<<"n= "<< n;
}        else{
        cout <<"0";//<<endl;
        //cout <<"i= "<<i<< endl<<"n= "<< n;
        }
        m/=2;
//cout <<i<< endl<< n<<endl;
    }
    //cout <<endl<< i;

}
int main(int argc, char **argv)
{
	int n = 2;
	int i = 0;
	int m= 0;
	cout <<"Podaj liczbe w systemie dziesietnym"<<endl;
	cin >> i;
dziesietnynadwojkowy(i, n, m);

	return 0;
}
