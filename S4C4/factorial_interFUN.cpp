#include<iostream>

/*Tome su programa que calcula el factorial de un numero n (y que recibe n interactivamente). Reescribalo usando funciones. La seccion de codigo que calcula el factorial debe ser una funcion independiente que es llamada desde la funcion main. llamelo factorial_interFUN.cpp
*/

using namespace std;
int factorial(int numfactorial, int numero);
int numfactorial = 1;
int numero;	

int main()
{
	cout << "Ingrese el valor n";
	cin>> numero;
	cout <<"Factorial de n es: " << factorial(numfactorial,numero) << endl;

	return 0;
}

int factorial(int numfactorial,int numero){

	for( int i=1; i<=numero ;i++)
	{
		numfactorial= numfactorial*i;
	}
	return numfactorial;
}