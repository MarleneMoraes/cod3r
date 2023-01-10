/**
 * @file aula037-for.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 037 - For #01
 */

#include <iostream>
using namespace std;

int main()
{

    /*
        Estrutura For -> expressao que ha
        numero de repeticoes definidas, mas ha
        uma condicao PARA repetir
    */

    /*
        int i = 0;
        for (; i < 10;)
        {
            cout << i << endl;
            i++;
        }
    */

    // statement
    for (int i = 0; i < 10; i++)
        cout << i << endl;

    // block of code
    for (int i = 100; i >= 0; i -= 2)
    {
        cout << i << endl;
    }

    return 0;
}