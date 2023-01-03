/**
 * @file aula027-unary.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 027 - Operadores Unarios
 */

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Operadores Unarios

    int x = 1;
    int y = 2;

    //Incremento
    x++; //pos-fixa
    ++y; //pre-fixa

    printf("%d %d", x, y);

    //Decremento
    x--; //pos-fixa
    --y; //pre-fixa

    printf("%d %d", x, y);


    /*
        Diferenca entre pos-fixa/prefixa: a prefixa ha um nivel 
        de precedencia (prioridade) perante a igualdade, enquanto 
        a pos-fixa e realizada apos
    */

    printf("%d", x-- == ++y);

    return 0;
}