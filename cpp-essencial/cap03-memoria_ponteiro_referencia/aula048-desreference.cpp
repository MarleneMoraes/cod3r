/**
 * @file aula048-desreference.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-30
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 03 - Memoria(Referencia/Ponteiro)
 * Aula 048 - Operador de (Des)referencia
 */

#include <iostream>
using namespace std;

int main()
{
    // Desreferenciar -> acessar o valor da referencia
    // daquele local de memoria

    double pi = 3.14;
    double &piRef = pi;

    cout << piRef << endl; // 3.14
    cout << *&pi << endl;  // 3.14 desreferenciado: acessa o valor deste local de memoria
    // cout << &*&pi << endl; // local de memoria (referencia/desreferencia/referencia)

    return 0;
}