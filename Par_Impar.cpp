/*Realizar un programa que lea un valor entero y determine si se tata de un numero par o impart*/

#include<iostream>
#include<stdio.h>

using namespace std;

void Evaluar(int val)
{
    if (val%2==0){
        printf("El numero %d es par\n",val);
    }
    if (val%2!=0){
        printf("El numero %d es impar\n",val);
    }

}

int main()
{
    
    int valor1;

    cout<<"Introduce un numero que quieras saber si es par o inpar"<<endl;
    cin>>valor1;

    Evaluar(valor1);
    
    

}