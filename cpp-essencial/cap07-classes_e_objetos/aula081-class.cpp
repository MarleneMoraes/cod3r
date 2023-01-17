/**
 * @file aula081-class.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-12
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 07 - Classes & Objetos
 * Aula 081: Classe vs Objeto
 */

#include <iostream>
using namespace std;

class Date
{
    // Por padrao, os atributos sao privados

public: // torna os atributos publicos
    int day;
    int month;
    int year;
};

int main()
{
    Date date1; // instanciar um objeto
    date1.day = 3;
    date1.month = 11;
    date1.year = 2023;

    Date date2;
    date2.day = 31;
    date2.month = 12;
    date2.year = 2022;

    cout << date1.day << "/" << date1.month << "/" << date1.year << endl;
    cout << date2.day << "/" << date2.month << "/" << date2.year << endl;

    return 0;
}
