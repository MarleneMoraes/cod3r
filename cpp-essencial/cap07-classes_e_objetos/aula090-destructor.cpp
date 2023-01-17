/**
 * @file aula090-destructor.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-12
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 07 - Classes & Objetos
 * Aula 090: Destrutor
 */

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    string email;

    Person(string name = "Anonymous") : name(name)
    {
        cout << "Hello! My name is " << name << endl;
    }

    ~Person()
    {
        cout << name << "is left the code." << endl;
    }
};

int main()
{
    // a destrucao do objeto Peter sera apos a execucao de todo o codigo por estar no escopo do main
    Person p1("Peter");

    // no escopo, a destrucao do objeto sera apos o bloco ser executado
    {
        Person p2{"Mary"};
        Person p3{"John"};
        Person p4 = Person("May");
    }

    cout << "End of code" << endl;
    return 0;
}
