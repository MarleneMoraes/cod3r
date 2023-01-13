/**
 * @file define.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-10
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 05 - Alguns Conceitos Importantes
 * Aula 067: Define
 */

#define ZERO 0 // token ZERO / identificador 0
#define SQUARE(X) X *X
#include <iostream>
using namespace std;

/*
    Define -> diretiva de preprocessador que define
    um token para um identificador, que sera substituido
    durante o preprocessamento para a execucao
*/

int main()
{
    cout << SQUARE(10) << endl; // 100
    //      10 * 10

    /*
        ATENCAO! O Define realiza substituicoes mais simples,
        em que a procedencia de operacoes e priorizada. Para
        evitar, utilizar funcoes
    */
    cout << SQUARE(1 + 2) << endl; // 5
    //             1 + 2 * 1 + 2

    NULL // NULL e um define nativo
    
    return ZERO;
}
