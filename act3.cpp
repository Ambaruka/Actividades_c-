//
// Created by AmbarPC on 17/04/2024.
//
#include <iostream>
using namespace std;

float promedio(float a[20],int b){
    int suma=0, promedio;
    for (int i = 0; i <b ; ++i) {
        suma+=a[i];
    }
    promedio=suma/b;
    return promedio;
}

int main(){
    float notas[20],promedioalto,promediobajo,promediototal,agrupación[20];
    int indice=0;

    cout<<"Ingrese las 20 notas finales"<<endl;

    for (int i = 0; i <20 ; ++i) {
        cin>>notas[i]>>oct;

        if (notas[i]=0){
            cout<<"ERROR"<<endl;
            exit(0);
        }
    }


    for (int i = 0; i < 20; ++i) {
        if (notas[i]>=8){
        agrupación[i]=notas[i];
        ++indice;
        }
    }

    promedioalto= promedio(agrupación,indice);
    cout<<"promedio de las notas mayores a 8: "<<promedioalto<<endl;
    indice=0;

    for (int i = 0; i < 20; ++i) {
        if (4>=notas[i]){
            agrupación[i]=notas[i];
            ++indice;
        }
    }

    promediobajo= promedio(agrupación,indice);
    cout<<"promedio de las notas menores a 4: "<<promediobajo<<endl;

    promediototal= promedio(notas,20);
    cout<<"promedio general: "<<promediototal<<endl;


    return 0;
}