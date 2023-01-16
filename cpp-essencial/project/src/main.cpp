#include <iostream>
#include "functions/calc.h"

using namespace std;
using namespace calc;

/*
    Como compilar:
    No terminal, digitar na pasta project: 
        chmod +x build.sh
        ./build.sh
        ./dist/app
    

*/

int main()
{
    int valor1, valor2;

    cout << "Primeiro valor: ";
    cin >> valor1;

    cout << "Segundo valor: ";
    cin >> valor2;
    cout << endl;
    
    cout << "Adição: " << add(valor1, valor2) << endl;
    cout  << "Subtração: " << sub(valor1, valor2) << endl;
    return 0;
}
