/**
 * @file aula095-new.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-12
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 07 - Classes & Objetos
 * Aula 095: Operador new #01
 */

#include <iostream>
using namespace std;

/*
    Operador new -> Alocacao de memoria no heap e 
    chama o construtor
    
    Operador delete -> libera memoria e chama o 
    destrutor
*/

int main()
{
    int x = 5; // memoria alocada na stack

    new int(10); // memoria alocada na heap -> 4 bytes

    int *y = new int(10); // os dados alocam-se em um ponteiro
    cout << x * *y << endl;

    delete y; // free() + destructor

    int *w = new int[100]; // alocacao na heap de 100 elementos (4 bytes * 100)
    w[49] = 123;

    cout << w[49] << endl;

    delete[] w; // todas as vezes que alocar na heap deve mandar deletar um ou diversos espacos

    return 0;
}
