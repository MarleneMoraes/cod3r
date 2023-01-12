/**
 * @file aula055-function.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-09
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 04 - Funcoes
 * Aula 055: Basico Sobre Funcoes #03
 */

#include <iostream>
using namespace std;

int max(int n1, int n2)
{
    return n1 >= n2 ? n1 : n2;
}

int main()
{
    int a, b, c;
    cout << "Enter a number: ";
    cin >> a;

    cout << "Enter a number: ";
    cin >> b;

    cout << "Enter a number: ";
    cin >> c;

    // Funcao dentro de outra funcao
    cout << "Max: " << max(a, max(b, c));

    // Tambem pode ser representado:
    int maxBC = max(b, c);
    cout << "Max: " << max(a, maxBC); 

    return 0;
}