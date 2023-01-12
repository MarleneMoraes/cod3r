/**
 * @file aula063-function_param.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-09
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 04 - Funcoes
 * Aula 063: Funcao como Parametro
 */

#include <iostream>
using namespace std;
using binaryop = int (*)(int, int);

/*
    Funcao como parametro e um modelo de funcao que
    executa seu retorno de acordo com a funcao pai
*/

// Valores fixos
/*
    int run(int (*func)(int, int))
    {
        return (*func)(4,7);
    }
*/
int run(binaryop func, int a, int b)
{
    return (*func)(a, b);
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int min(int a, int b)
{
    return a < b ? a : b;
}

int main()
{

    // cout << run(add);
    // cout << run(sub);

    cout << run(add, 4, 7);
    cout << run(sub, 44, 33);
    return 0;
}
