/**
 * @file aula089-constructor.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-12
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 07 - Classes & Objetos
 * Aula 089: Construtor #04
 */

#include <iostream>
using namespace std;

class Actor
{
public:
    string name;
    string email;

    // Forma simplificada de obter todos os parametros
    Actor(string name = "Anonymous", string email = "-")
        : name(name), email(email) {} // atributo(parametro)

    string toString()
    {
        return this->name + " [" + this->email + "]"; //nao obrigatorio utilizar o this, mas fica mais claro
    }
};

int main()
{
    Actor actor1("Steve", "carell@office.com");
    Actor actor2();

    cout << actor1.toString();
    cout << actor2.toString();

    return 0;
}
