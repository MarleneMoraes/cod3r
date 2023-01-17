/**
 * @file aula096-new.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-12
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 07 - Classes & Objetos
 * Aula 096: Operador new #02
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
    Person* person = new Person("Peter");
    return person;
}

void changePerson(Person& person){
    person.name +="Parker";
}

int main()
{
    Person* person1 = new Person("Aunt May Parker");
    delete person1; // caso nao acrescente, sofrera vazamento de memoria

    Person* person2 = (Person*) malloc(sizeof(Person));
    free(person2);

    Person* person3 = createPerson();
    changePerson(*person3);
    cout << person->name << endl;

    delete person3;
    return 0;
}
