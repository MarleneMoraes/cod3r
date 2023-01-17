/**
 * @file aula082-class.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-12
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 07 - Classes & Objetos
 * Aula 082: Primeiro Metodo
 */

#include <iostream>
#include <sstream>
using namespace std;

class Date
{
public: 
    int day;
    int month;
    int year;

    string to_string() {
        stringstream date_string;
        date_string << day << "/" << month << "/" << year;

        return date_string.str();
    }
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

    cout << date1.to_string() << endl;
    cout << date2.to_string() << endl;

    return 0;
}
