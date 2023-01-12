/**
 * @file aula054-function.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-09
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 04 - Funcoes
 * Aula 054: Basico Sobre Funcoes #02
 */

#include <iostream>
using namespace std;

/*
    Function prototype: apenas a definicao
    da funcao e exibida para declaracao
    posterior da funcao. Geralmente utilizado
    em arquivos header (.h)
*/
void log(int number, bool newLine = true); // o C++ assume o valor padrão, quando atribuido

int main()
{
    log(3, false);
    log(4, false);

    log(5); // o C++ assume o valor padrão

    return 0;
}

void log(int number, bool newLine)
{
    cout << "Number: " << number;
    newLine ? cout << endl : cout << " ";
}
