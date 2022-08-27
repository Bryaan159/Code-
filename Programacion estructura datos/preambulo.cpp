#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //variables
    int array[4],sumPar = 0, auxNumer=0,sumImpar = 0, contadorPar=0, contadorImpar=0,i=0;
    for(i; i < 4; i++){
        cout<<"Ingrese un numero: ";
        cin>>auxNumer;
        cout<<"\n";
        array[i] = auxNumer;
    }
    for(int i = 0; i < 4; i++){
        auxNumer = array[i];
        if(auxNumer % 2 == 0){
            sumPar = sumPar + auxNumer;
            contadorPar++;
        }
        else{
            sumImpar = sumImpar + auxNumer;
            contadorImpar++;

        }
    }
    cout<<"Suma de numeros par son:"<<sumPar<<" y son en total "<<contadorPar<<" numeros pares\n";
    cout<<"Suma de numeros impar son:"<<sumImpar<<" y son en total "<<contadorImpar<<" numeros impares\n";

    return 0;
}