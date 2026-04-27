#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float r, pi=3.141516;
    int area;

    cout << "Bienvenido, Ingrese el radio" << endl;
    cin>> r;

    
    area= pi *(pow(r, 2));

    if(area % 2 == 0)
    {
        cout << "EL area calculada: " << area << " ,por lo tanto es par." <<endl;

    }
    else
    {
        cout << "EL area calculada: " << area << " ,por lo tanto es impar." <<endl;
    }



    return 0;



}