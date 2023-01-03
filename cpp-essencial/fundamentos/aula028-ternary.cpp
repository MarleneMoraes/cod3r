/**
 * @file aula028-ternary.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 028 - Operador Ternario
 */

#include <iostream>
using namespace std;

int main()
{
    /*
        Operador Ternario: expressao boolean com valores pre 
        determinados, sendo o primeiro valor e verdadeiro e 
        o segundo e falso

        exp(T/F) ? T : F; 
    */ 

   bool sunny = false;

   string result = sunny ? ":)" : ":(";

   //-------------------------------------------------------
   
    double balance = 1234.56;
    double value;
    cout << "Enter the value: ";
    cin >> value;

    char creditOrDebt;
    cout << "Credit (c) / Debt (d): ";
    cin >>creditOrDebt;

    cout << "Balance [Before]: " << balance << endl;

    balance += creditOrDebt == 'c' ? value : -value;

    cout << "Balance [After]: " << balance << endl;


    return 0;
}