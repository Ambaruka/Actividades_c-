#include <iostream>
#include <string>
using namespace std;

int totalprice(float price){
    float total;
    total=price+(price*0.16);
    return total;
};

struct factura{
    string name,nameproduc[2];
    float price[2],total[2];
};

int main() {

    struct factura nueva;

    cout << "Ingrese su nombre" << endl;
    cin >> nueva.name >> oct;

    cout <<"Ingrese el nombre del primer producto "<< endl;
    cin >> nueva.nameproduc[0]>> oct;

    cout <<"Ingrese el precio del primer producto "<< endl;
    cin >> nueva.price[0]>> oct;

    cout <<"Ingrese el nombre del segundo producto "<< endl;
    cin >> nueva.nameproduc[1]>> oct;

    cout <<"Ingrese el precio del segundo producto "<< endl;
    cin >> nueva.price[1]>> oct;

    for (int a=0; a<2; ++a ) {
        nueva.total[a]= totalprice(nueva.price[a]);
    }

    cout<<"Facturs a nombre de "<<nueva.name<<"\nProductos: "<< endl;

    for (int i = 0; i < 2; ++i) {
        cout<<"\n"<<nueva.nameproduc[i]<<"\n   Precio sin facturar =$"<<nueva.price[i]<<"\n   Precio con factura =$"<<nueva.total[i]<<endl;
    }


    return 0;
}
