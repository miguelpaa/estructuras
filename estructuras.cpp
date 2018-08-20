#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
struct direccion{
    char calle[20];
    int cp;
    char ciudad[20];

};
struct persona{
    char nombre [20];
    int edad ;
    float estatura ;
    struct direccion dire;
};

int main(){
	
	struct persona P2[5];
    for (int i; i<=5; i++){
    cout << "Nombre: ";
    cin.getline(P2[i].nombre,20, '\n');
    cin.getline(P2[i].nombre,20, '\n');
    cout << endl;
    cout << "Edad: ";
    cin >> P2[i].edad;
    cout << endl;
    cout << "Estatura: ";
    cin >> P2[i].estatura;
    cout << endl;
    cout << "Calle: ";
    cin.getline (P2[i].dire.calle,20,'\n');
    cin.getline (P2[i].dire.calle,20,'\n');
    cout << endl;
    cout << "Codigo Postal: ";
    cin >> P2[i].dire.cp;
    cout << endl;
    cout << "Ciudad: ";
    cin.getline(P2[i].dire.ciudad,20, '\n' );
    cin.getline(P2[i].dire.ciudad,20, '\n' );
    }
    return 0;
}
