/**
 * @file identifiers.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-10
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 05 - Alguns Conceitos Importantes
 * Aula 069: Identificadores
 */

#include <iostream>
using namespace std;

/*
    Sobrecarga de metodos -> metodos com mesmo
    nome mas com assinaturas diferentes. O compilador
    identificara as diferentes assinaturas de acordo
    com os parametros apresentados nas chamadas dos 
    metodos
*/

int add(int x, int y)
{
    return x + y;
}

int add(int x, int y, int z)
{
    return x + y + z;
}

double add(double x, int y)
{
    return x + y + 1000;
}

double add(int a, double b)
{
    return a + b + 2000;
}

int main()
{
    cout << add(10, 20) << endl;     // 30
    cout << add(10, 20, 30) << endl; // 60
    cout << add(10.0, 20) << endl;   // 1030
    cout << add(10, 20.0) << endl;     // 2030
    return 0;
}
