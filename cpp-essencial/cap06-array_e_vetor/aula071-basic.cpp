/**
 * @file aula071-basic.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-11
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 06 - Array & Vector
 * Aula 071: Basico Sobre Array #01
 */

#include <iostream>
using namespace std;

/*
    Array -> estrutura de tamanho fixo de tipo homogêneo
    e consegue ser acessado a partir do indice
*/


int main()
{
    string names[5];
    names[0] = "Hanna";
    names[1] = "Peter";
    names[2] = "Mary";
    names[3] = "Mike";
    names[4] = "James";
    
    cout << names[0] << endl; // Hanna
    cout << names[1] << endl; // Peter
    cout << names[2] << endl; // Mary
    cout << names[3] << endl; // Mike
    cout << names[4] << endl; // James

    /*
        Diferente de outras linguagens, o C++ consegue acessar com
        warning e mostrar a posição posterior ao tamanho do array
        (neste caso, é a posição 5)
    */
    cout << names[5] << endl; // Segmentation fault (core dumped)

    return 0;
}
