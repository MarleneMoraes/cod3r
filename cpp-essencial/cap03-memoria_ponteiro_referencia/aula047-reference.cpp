/**
 * @file aula047-reference.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-30
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 03 - Memoria(Referencia/Ponteiro)
 * Aula 047 - Referencia #03
 */

#include <iostream>
using namespace std;

int main()
{
    // ATENCAO: nao existe referencia que nao inicializa ou nullptr
    // string& badRef;

    string greeting = "Hi!";
    string &ref = greeting;

    cout << greeting << "\t" << ref << endl;

    string name = "Peter";
    ref = name; // variavel com valor igual a name, mas endereco de memoria diferente
    //greeting transforma no mesmo valor de ref
    cout << name << "\t" << ref << "\t" << greeting << endl;
    cout << &name << "\t" << &ref << "\t" << &greeting << endl;

    ref = "Hi ";
    ref.append(name);
    cout << ref << endl;

    return 0;
}