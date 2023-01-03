/**
 * @file aula033-ifElse.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 033 - If/Else
 */

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // statement
    /*
        if (number % 2 == 0)
            cout << "Even number." << endl;
    
        else
            cout << "Odd number." << endl;
    */

   //block of code
    if (number % 2 == 0)
    {
        cout << "Even number." << endl;
    }
    else
    {
        cout << "Odd number." << endl;
    }
    return 0;
}