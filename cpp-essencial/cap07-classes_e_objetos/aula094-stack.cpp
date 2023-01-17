/**
 * @file aula094-stack.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-12
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 07 - Classes & Objetos
 * Aula 094: Usando a Stack
 */

#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    Person(string name) : name(name)
    {
        cout << "Hello! My name is " << name << endl;
    }

    ~Person()
    {
        cout << name << "is left the code." << endl;
    }
};

Person* createPerson() {
    Person person("Hanna");
    return &person;
}

int main()
{
    Person* person_ptr1;

    {
        Person person1("Peter");
        person_ptr1 = &person1;
    }

    cout << person_ptr1->name << endl;

    Person* person_ptr2 = createPerson();
    cout << person_ptr2->name << endl; // saiu do escopo, dara erro

    cout << "End of code!" << endl;

    return 0;
}
