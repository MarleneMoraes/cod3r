/**
 * @file aula025-relational.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 025 - Operadores Relacionais
 */

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Operadores Relacionais -> sempre resultara apenas 1 (true) ou 0 (false).

    int x;

    printf("Enter a value: ");
    scanf("%d", &x);
    
    printf("%d > 10 -> %d\n", x, x > 10); // x > 10? 
    printf("%d >= 10 -> %d\n", x, x >= 10); // x >= 10? 

    printf("%d < 10 -> %d\n", x, x > 10); // x < 10? 
    printf("%d <= 10 -> %d\n", x, x > 10); // x <= 10? 

    printf("%d == 10 -> %d\n", x, x == 10); // x = 10? 
    printf("%d != 10 -> %d\n", x, x != 10); // x != 10? 

    return 0;
}