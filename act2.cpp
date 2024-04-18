//
// Created by AmbarPC on 17/04/2024.
//
#include <iostream>
using namespace std;

int main(){
    int menor=100,numeros[10];

    cout<<"Ingrese 10 valores enteros a calcular"<<endl;

    for (int i = 0; i<10; i++) {
        cin >> numeros[i] >> oct;

        if (numeros[i]<=menor){
            menor=numeros[i];
        }
    }

    cout<<"Numero menor: "<<menor<<endl;

    if (10>menor)
    cout<<"El numero menor es menor que 10"<<oct;

    else{
        cout<<"El numero menor es igual o mayor que 10"<<oct;
    }

    return 0;
}