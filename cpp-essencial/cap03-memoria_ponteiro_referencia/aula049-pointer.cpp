/**
 * @file aula049-pointer.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-30
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 03 - Memoria(Referencia/Ponteiro)
 * Aula 049 - Ponteiro #01
 */

#include <iostream>
using namespace std;

int main()
{
    // Ponteiro e uma variavel que armazena o endereco de memoria de outra variavel

    int value = 98765;
    int &reference = value;
    int *pointer = &value;

    cout << value << "\t" << reference << "\t" << pointer << endl;

    cout << *pointer << endl; // acessar o valor do ponteiro

    return 0;
}