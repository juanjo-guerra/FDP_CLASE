#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;

    //
    cout<< "Ingrese el numero entero" << endl;
    cin >>n;

    if(n == 0)
    {
        cout << "TU numero es cero. " <<endl;
    }
    else if (n < 0)
    {
        cout << "Tu numero es negativo" << endl;
    }
    else
    {
        cout << "Tu numero es positivo. " <<endl;
    }



}