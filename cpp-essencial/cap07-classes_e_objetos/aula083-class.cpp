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
using namespace std;

class Product
{
public:
    string name;
    double price;
    double discount;

    double finalPrice()
    {
        // double finalPrice = price - (price * discount);
        // return finalPrice;
        return (1 - discount) * price;
    }
};

int main()
{
    Product product1;
    product1.name = "Notebook";
    product1.price = 1600.00;
    product1.discount = 0.15;

    cout << product1.name << endl;
    cout << product1.price << endl;
    cout << product1.discount << endl;
    cout << product1.finalPrice() << endl;

    return 0;
}
