#include<iostream>

using namespace std;

//programa 3: Haga un programa que calcule el factorial de un numero n. Tome n=7 como ejemplo. llamelo factorial.cpp. Que pasa si toma n=77?

int main(){
    
    int numfactorial;
	numfactorial=1;
	int numero;
    cout<<"ingrese numero"<< endl;
    cin >> numero;
	//numero= 7;

	for( int i=1; i<=numero ;i++)
	{
		numfactorial= numfactorial*i;
	}

	cout <<"Factorial de "<< numero<< " es: " << numfactorial << endl;
 
    return 0;
}