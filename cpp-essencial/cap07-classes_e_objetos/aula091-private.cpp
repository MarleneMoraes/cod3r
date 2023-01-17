/**
 * @file aula091-private.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-12
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 07 - Classes & Objetos
 * Aula 091: Atributos Privados
 */

#include <iostream>
using namespace std;

const double MINIMUM_WAGE = 1500;

class Employee
{
public:
    string name;

private:
    double wage = MINIMUM_WAGE;

public: // pode alternar o acesso dos atributos e metodos no objeto
    double getWage()
    { // const
        // return wage > MINIMUM_WAGE ? wage : MINIMUM_WAGE;
        return wage;
    }

    double setWage(double wage)
    {
        if (w >= MINIMUM_WAGE)
        {
            this->wage = wage;
        }
    }

    ~Employee() {}
};

int main()
{
    Employee employee1;
    employee1.name = "Paul Smith";
    employee1.setWage(5000);

    cout << "US$" << employee1.getWage() << endl;
    return 0;
}
