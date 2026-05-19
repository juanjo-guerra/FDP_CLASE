#include <iostream>
using namespace std;

int main()
{
    int n = 0, a;

    cout << "Podrías ingresar un  numero que sera tu limite" << endl;
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        // Imprimir el valor actual de 1

        cout << i << " ";
    }
    cout << endl;
    return 0;
}