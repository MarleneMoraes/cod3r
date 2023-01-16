/**
 * @file aula079-vector_map.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-11
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 06 - Array & Vector
 * Aula 079: Implementando a Funcao Map
 */

#include <iostream>
#include <vector>
using namespace std;

using mapfn = int(*)(int);

/*
    Funcao Map -> percorre os elementos,
    chama a funcao e gera outro array
*/

vector<int> map(vector<int> vctr, mapfn fn)
{
    vector<int> newVector;

    for (auto element : vctr)
    {
        newVector.push_back((*fn)(element));
    }

    return newVector;
}

int main()
{
    auto square = [](int x)
    { return x * x; };

    auto triple = [](int x)
    { return 3 * x; };

    vector<int> numbers = {2, 5, 8, 23, 56};

    vector<int> squares = map(numbers, square);

    vector<int> triples = map(numbers, triple);

    /*
        //forma manual

        for (auto number : numbers)
        {
            squares.push_back(square(number));
        }
    */

    for (auto number : numbers)
    {
        cout << number << "\t";
    }
    cout << endl;

    for (auto square : squares)
    {
        cout << square << "\t";
    }
    cout << endl;

    for (auto triple : triples)
    {
        cout << triple << "\t";
    }
    cout << endl;

    return 0;
}
