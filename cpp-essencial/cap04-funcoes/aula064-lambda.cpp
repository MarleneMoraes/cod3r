/**
 * @file aula064-lambda.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-09
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 04 - Funcoes
 * Aula 064: Lambda
 */

#include <iostream>
using namespace std;
using binaryop = int (*)(int, int);

/*
    Funcao Lambda -> funcoes anonimas
    Ideal usar inferencia (auto)
*/

auto add = [](int x, int y) -> int
{ return x + y; };

auto sub = [](int x, int y) -> int
{ return x - y; };

int main()
{
    cout << add(10,20) << endl;
    cout << sub(26,20) << endl;
    return 0;
}
