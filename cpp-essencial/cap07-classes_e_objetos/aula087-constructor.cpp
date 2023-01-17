/**
 * @file aula087-constructor.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-12
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 07 - Classes & Objetos
 * Aula 087: Construtor #02
 */

#include <iostream>
using namespace std;

class User
{
public:
    string name;
    string email;

    /*
        Sobrecarga ocorre quando possui um mesmo identificador
        criou-se varios metodos diferentes.
    */
    User() { }

    User(string _name, string _email)
    {
        name = _name;
        email = _email;
    }

    string toString()
    {
        return name + " [" + email + "]";
    }
};

int main()
{
    User user1; // User user1 = User();
    user1.name = "Peter Johnson";
    user1.email = "peter.john.123@zymail.com";

    User user2("Mary M.", "mym@foo.com"); // User user2 = User("Mary M.", "mym@foo.com");
    
    cout << user1.toString() << endl;
    cout << user2.toString() << endl;

    return 0;
}
