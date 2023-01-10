/**
 * @file aula040-switch.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 040 - Switch
 */

#include <iostream>
using namespace std;

int main()
{

    /*
        Estrutura switch -> estrutura de casos que 
        nao necessariamente seja boolean
    */

    int month;
    cout << "Enter a month in number: ";
    cin >> month;
    
    int numberOfDays;

    switch (month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            numberOfDays = 31;
            break;
        case 2:
            numberOfDays = 28;
            break;
        case 4: 
        case 6: 
        case 9: 
        case 11:
            numberOfDays = 30;
            break;
        default:
            cout << "ERROR" << endl;
    }

    cout << "This month has " << numberOfDays << " days" << endl;
    
    return 0;
}