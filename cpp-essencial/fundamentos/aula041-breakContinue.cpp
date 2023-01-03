/**
 * @file aula041-for.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 041 - Break/Continue
 */

#include <iostream>
using namespace std;

int main()
{
    // Estrutura break -> quando invocado, sai da estrutura atual

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            break; // imprimira de 0 a 4
        cout << i << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        if (i == 5)
            break; // imprimira de 0 a 5
    }

    // o break age dentro do laco mais proximo
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 2)
            {
                break;
            }
            cout << i << " " << j << endl;
        }
    }

    // Estrutura continue -> quando invocado, nao executa apenas condicao indicada

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            continue; // imprimira de 0 a 4, 6 a 9
        cout << i << endl;
    }

    return 0;
}