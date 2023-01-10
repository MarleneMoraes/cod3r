/**
 * @file aula038-for.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 038 - For #02
 */

#include <iostream>
using namespace std;

int main()
{

    /* 
        Calcular media enquanto a entrada for 
        diferente de -1 
   */

    int number = 0;
    int total = 0;
    int quantitity = 0;

    for (;number != -1;)
    {
        cout << "Enter a number or -1 to finish: ";
        cin >> number;

        if(number != -1){
            total += number;
            quantitity++;
        }    
    }

    double avg = ((double) total) / quantitity;
    cout << avg << endl;

    return 0;
}