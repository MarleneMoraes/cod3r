/**
 * @file aula030-if.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 030 - If#02
 */

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0)//;
    {
        cout << "Even number." << endl;
    }
    return 0;
}