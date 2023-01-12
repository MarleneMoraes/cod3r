/**
 * @file aula058-recursion.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-09
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 04 - Funcoes
 * Aula 058: Recursividade
 */

#include <iostream>
using namespace std;

/*
    Recursividade -> utilizada constantemente em
    paradigma funcional, e utilizada em menos
    intensidade no paradigma de orientacao a objetos
*/

int factorialUnrecursion(int n)
{
    int total = 1;
    for (int i = 1; i <= n; i++)
    {
        total *= i;
    }
    return total;
}

int factorialRecursion(int n)
{
    if (n <= 0)
        return -1;

    if (n == 1)
    {
        return 1;
    }
    return n * factorialRecursion(n - 1);
}

int main()
{

    cout << factorialUnrecursion(3);
    cout << factorialUnrecursion(4);
    cout << factorialUnrecursion(5);
    cout << factorialUnrecursion(6);

    cout << factorialRecursion(3);
    cout << factorialRecursion(4);
    cout << factorialRecursion(5);
    cout << factorialRecursion(6);

    return 0;
}