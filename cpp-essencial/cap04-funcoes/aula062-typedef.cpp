/**
 * @file aula062-typedef.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-09
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 04 - Funcoes
 * Aula 062: Typedef
 */

#include <iostream>
using namespace std;

/*
    Typedef e um sinonimo para o tipo 
    fornecido pela parte de declaracao 
    do tipo desta declaracao
*/

typedef int id;
using counter = long; // utilizado no c++ 11+


int main()
{
    id a = 5;
    counter b = 10;

    cout << a + b << endl;

    return 0;
}
