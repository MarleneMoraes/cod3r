/**
 * @file aula074-for_array.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-11
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 06 - Array & Vector
 * Aula 074: Iterando Sobre Array #02
 */

#include <iostream>
using namespace std;

int main()
{
    string names[] = {"Hanna", "Peter", "Mary", "Mike", "James"};

    // For Each com atribuicao por copia
    cout << "Foreach (Cópia)" << endl;
    for (auto name : names)
    {
        name.append("!!!!");
        cout << name << " "; // Hanna Peter Mary Mike James
    }

    cout << endl;

    // For Each com atribuicao por referencia
    cout << "Foreach (Referência)" << endl;
    for (auto &name : names)
    {
        name.append("!!!!");
        cout << name << " "; // Hanna Peter Mary Mike James
    }


    // For Each com atribuicao por referencia sem alteracao
    cout << "Foreach (Referência s/ Alteração)" << endl;
    for (auto const &name : names)
    {
        //name.append("!!!!");
        cout << name << " "; // Hanna Peter Mary Mike James
    }

    return 0;
}
