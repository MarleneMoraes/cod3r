/**
 * @file aula050-pointer.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-30
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 03 - Memoria(Referencia/Ponteiro)
 * Aula 050 - Ponteiro #02
 */

#include <iostream>
using namespace std;

int main()
{
    // Ponteiro possui maior flexibilidade em sua inicializacao, pois consegue ser nulo/vazio
    int* p1;
    int* p2  = nullptr; //criar ponteiro nulo

    int x = 5;
    int y = 10;

    // Referenciar a variavel a partir de um ponteiro
    p1 = &x;
    cout << *p1 << endl;

    // Apontar para outro endereco de memoria -> o ponteiro pode mudar o endereco que aponta
    p1 = &y;
    cout << *p1 << endl;

    // Copia de endereco de memoria -> outro ponteiro pode copiar o endereco de memoria que o primeiro aponta de maneira independente
    p2 = p1;
    cout << *p2 << endl;

    return 0;
}