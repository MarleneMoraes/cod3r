/**
 * @file aula073-for_array.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-11
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 06 - Array & Vector
 * Aula 073: Iterando Sobre Array #01
 */

#include <iostream>
using namespace std;

int main()
{
    string names[] = {"Hanna", "Peter", "Mary", "Mike", "James"};

    // Melhor manuseio do array (pode mostrar apenas os indices pares, por exemplo)
    int size = sizeof names / sizeof names[0];
    for (int i = 0; i < size; i++)
    {
        cout << names[i] << " "; // Hanna Peter Mary Mike James
    }

    cout << endl;

    // For Each: Estrutura de repeticao que passa por todos os elementos
    for (string name : names)
    {
        cout << name << " "; // Hanna Peter Mary Mike James
    }

    return 0;
}
