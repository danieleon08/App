#include <iostream>
using namespace std;
int main() {
    int opcion=0;
    cout<<"este es el menú"<<endl;
    cout<<"estas son las opciones"<<endl;
    cout<<"Eliga una de las opciones"<<endl;
    cin>>opcion;
    switch (opcion)
    {
    case 1:
        cout<<"Esta es la opcion 1"<<endl;
        break;
    case 2:
        cout<<"Esta es la opcion 2"<<endl;
        break;
    case 3:
        cout<<"Esta es la opcion 3"<<endl;    
        break;
    default:
        break;
    }
    return 0;
}



