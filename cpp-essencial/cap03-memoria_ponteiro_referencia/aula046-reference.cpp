/**
 * @file aula046-reference.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-30
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 03 - Memoria(Referencia/Ponteiro)
 * Aula 046 - Referencia #02
 */

#include <iostream>
using namespace std;

int main()
{
    int x = 7;
    int &xRef = x;

    /*
        Por que nao int& xRef = &x; ?
        Porque o x sera substituido em tempo de
        compilacao pelo endereco.
    */

    cout << x << "\t" << &x << endl;
    cout << xRef << "\t" << &xRef << endl; // mesmo endereco de memoria da variavel acima

    x++;                  // modificara ambas as variaveis
    cout << xRef << endl; // 8

    xRef--;
    cout << x << endl; // 7

    return 0;
}