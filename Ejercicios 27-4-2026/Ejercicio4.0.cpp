#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int y, x;

    //Solicita al usuario un numero
    cout << "Por favor, ingresa u numero" << endl;
    cin >> y;

    //Calcula X= y^y
    x= pow(y, y);

    //Determina si x es par o impar

    if (x % 2 == 0)//INvestigar porque al operar con -2 me daba cero
    {
        cout << "El numero: " << x << " es par. " << endl;
    }
    else
    {
        cout << "EL numero: " << x<< " es impar. " << endl;

    }


    return 0;

    //Bloque para determinar si es positivo o negativo

    if(y<0)
    {
        cout<< "EL numero: "<<y << " es negativo." <<endl;
    }
    else
    {
        cout<< "EL numero: " <<y << " es postivo" <<endl;

    }


}