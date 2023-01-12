/**
 * @file aula056-copy_reference.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-09
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 04 - Funcoes
 * Aula 056: Parametro por Copia vs Referencia
 */

#include <iostream>
using namespace std;

void incrementByCopy(int value)
{
    value++;
}

void incrementByReference(int &value)
{
    value++;
}

int main()
{
    int x = 1;
    incrementByCopy(x);
    cout << x << endl;

    incrementByReference(x);
    cout << x << endl;

    return 0;
}