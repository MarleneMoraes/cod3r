/**
 * @file aula088-constructor.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-12
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 07 - Classes & Objetos
 * Aula 088: Construtor #03
 */

#include <iostream>
using namespace std;

class Actor
{
public:
    string name;
    string email;

    Actor() : Actor("Anonymous") { }

    // Actor() : Actor("Anonymous", "-") { }

    Actor(string name, string email = "-")
    {
        // this acessa os atributos do objeto
        this->name = name;   // (*this).name = name;
        this->email = email; // (*this).email = email;
    }

    string toString()
    {
        return name + " [" + email + "]";
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
