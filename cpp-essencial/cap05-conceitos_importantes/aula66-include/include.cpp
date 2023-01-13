/**
 * @file include.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-10
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 05 - Alguns Conceitos Importantes
 * Aula 066: Include #02
 */

#include <iostream>           // < > representa a inclusao de bibliotecas do C++
#include "includes/include.h" // "" representa a inclusao de documentos locais da aplicacao, mesmo em pastas
using namespace std;

int main()
{
    cout << add(7, 8) << endl;

    return 0;
}

int add(int x, int y)
{
    return x + y;
}