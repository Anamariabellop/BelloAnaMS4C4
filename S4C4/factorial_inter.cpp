#include<iostream>
using namespace std;

//programa 5: repita el programa de factorial, pero ahora permita que el usuario ingrese el valor de n. llamelo factorial_inter.cpp

int main(){
    int numerofactorial;
    numerofactorial=1;
    int numero;
    cout << "Ingrese el valor de n"<< endl;
    cin>> numero;
    
    for( int i=1; i<=numero; i++)
    {
     numerofactorial= numerofactorial*i;   
    }
    
    cout <<"Factorial de "<< numero << " es: " << numerofactorial << endl;
    
    return 0;
}