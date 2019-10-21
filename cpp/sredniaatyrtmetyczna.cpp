#include <iostream>
#include <cstdio>

using namespace std;


void pobierzOceny(int t[], int r){

	cout << "podaj  oceny:        "<< endl;
		int i;
	for(i=0; i<r;i++){
		cin >>  t[i];

	}
	}

	void DrukujTab(int t[], int r){
    int i;
	for(i=0; i<r;i++){
    cout <<  t[i]<< ", ";
}
}
void srednia(int t[], int r){
float suma = 0;
for(int i = 0; i<r; i++){
    suma += t[i];
    cout << suma<<endl;

}
cout << "suma twoich ocen to: " <<suma<<endl;

float s;
s = suma / r;
cout << "srednia twoich ocen to " << s <<endl;


}





int main(int argc, char **argv)
{
int r;
    cout <<"podaj ilosc ocen"<< endl;
    cin >> r;
    int t[r];
pobierzOceny(t, r);
 DrukujTab(t, r);
cout << endl;
srednia(t, r);

    return 0;
}
