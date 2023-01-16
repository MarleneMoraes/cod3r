/**
 * @file aula072-basic.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-11
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 06 - Array & Vector
 * Aula 072: Basico Sobre Array #02
 */

#include <iostream>
using namespace std;


int main()
{
    // Declaracao dos elementos
    string names[] = {"Hanna", "Peter", "Mary", "Mike", "James"};
    
    for (int i = 0; i < 5; i++)
    {
        cout << names[i] << " "; // Hanna Peter Mary Mike James
    }
    

    // outra maneira de percorrer o array (sem tamanho fixo, apenas acompanhando o tamanho do array)
    int size = sizeof names / sizeof names[0];
    for (int i = 0; i < size; i++)
    {
        cout << names[i] << " "; // Hanna Peter Mary Mike James
    }
    


    return 0;
}
