/**
 * @file aula036-while.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 036 - While #02
 */

#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    while (i < 10)
    {
        cout << i << endl;
        i++;
    }


    int j = 100;

    while (j >= 0)
    {
        cout << j << endl;
        j -= 2;
    }

    return 0;
}