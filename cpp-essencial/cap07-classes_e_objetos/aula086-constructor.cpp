/**
 * @file aula086-constructor.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-12
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 07 - Classes & Objetos
 * Aula 086: Construtor #01
 */

#include <iostream>
using namespace std;

/*
    Metodo construtor -> inicializa
    o objeto com valores padronizados
*/

class Date
{
public:
    int day;
    int month;
    int year;

    // int day = 1;
    // int month = 1;
    // int year = 1970;
    // Construtor
    Date()
    {
        day = 1;
        month = 1;
        year = 1970;
    }
};

int main()
{
    Date date;        // inicializou com a data 1/1/1970
    date.year = 2023; // modificou o ano

    cout << date.day << "/" << date.month << "/" << date.year << endl; // 1/1/2023

    return 0;
}
