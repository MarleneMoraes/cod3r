/**
 * @file aula061-main.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-09
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 04 - Funcoes
 * Aula 061: Funcao Main
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << argc << endl;    // quantidade de argumentos
    cout << argv[0] << endl; // caminho do programa

    if (argc >= 2)
    {
        cout << argv[1] << endl;
    }

    return 0;
}
