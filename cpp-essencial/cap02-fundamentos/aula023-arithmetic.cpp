/**
 * @file aula023-arithmetic.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 023 - Operadores Aritméticos
 */

#include <iostream>
using namespace std;

int main()
{
    // Operadores Aritmeticos: operadores binarios com notacao infix

    int x, y;

    cout << "Enter a number: ";
    cin >> x;
    
    cout << "Enter a number: ";
    cin >> y;

    // Operador soma 
    cout << x + y << endl;

    // Operador subtracao 
    cout << x - y << endl;

    // Operador multiplicacao 
    cout << x * y << endl;

    // Operador divisao 
    cout << x / y << endl;

    // Operador modulo: resto da divisao
    cout << x % y << endl;

    // Expressao -> faz uma operacao de cada vez
    cout << 2 + 2 * 2 << endl; //6

    //Prioriza a soma
    cout << (2 + 2) * 2 << endl; //8 


    return 0;
}