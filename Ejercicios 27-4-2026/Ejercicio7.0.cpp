#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float temp;

    cout <<"Ingrese la temperatura" <<endl;
    cin >> temp;

    if (temp <= 20)
    {
        cout << "El agua esta fría"<< endl;

    }

    else if (temp > 21 & temp <= 35)
    {
        cout << "El agua esta templada"<< endl;
    }
    else 
    {
        cout << "El agua esta caliente"<< endl;
    }
    
    
    
    return 0;



}