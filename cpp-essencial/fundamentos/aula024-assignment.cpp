/**
 * @file aula024-assignment.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 024 - Operadores de Atribuicao
 */

#include <iostream>
using namespace std;

int main()
{
    // Operadores de Atribuicao

    int x;

    cout << "Enter a initial value: ";
    cin >> x;
    
    //Atribuicao aditiva: acrescenta o valor indicado na variavel
    x += 10; //  x = x + 10;
    cout << x << endl;

    //Atribuicao subtrativa
    x -= 9; //  x = x - 9;
    cout << x << endl;

    x *= 8; //  x = x * 8;
    cout << x << endl;

    /*
        A divisao aplicada com apenas numeros inteiros, 
        ao
    */
    x /= 7; //  x = x / 7;
    cout << x << endl;

    x %= 6; //  x = x % 6;    
    cout << x << endl;


    return 0;
}