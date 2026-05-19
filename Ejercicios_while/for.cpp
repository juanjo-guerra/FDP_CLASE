#include <iostream>

using namespace std;

 int main()
{
    int contador;
    cout<<"Ingrese un numero para iniciar el contador";
    cin>> contador;

    while (contador <=5)
    {
        cout<<"Cotador while " <<contador<<endl;
        contador ++; //incrementa el contador
    }
    
    return 0;
    
}