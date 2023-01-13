/**
 * @file namespace.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-10
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 05 - Alguns Conceitos Importantes
 * Aula 070: Namespace
 */

#include <iostream>
using namespace std;

/*
    Namespace -> sao escopos para os identificadores
    a fim de evitar colisoes e organizar o codigo em
    grupos logicos
*/

int add(int a, int b)
{
    return a + b + 10;
}

namespace calc
{
    int add(int a, int b)
    {
        return a + b + 20;
    }
}

int main()
{
    cout << add(10, 20) << endl;       // 40
    cout << calc::add(10, 20) << endl; // 50
    return 0;
}
