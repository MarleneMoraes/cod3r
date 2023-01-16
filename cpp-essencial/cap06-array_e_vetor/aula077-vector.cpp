/**
 * @file aula077-vector.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-11
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 06 - Array & Vector
 * Aula 077: Vector #01
 */

#include <iostream>
#include <vector>
using namespace std;

// Vetores sao arrays com tamanhos dinamicos

int main()
{
    // O vetor tem tamanho 3, mas pode ser acrescentado mais elementos
    vector<int> numbers = {1, 2, 3};
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.push_back(6);
    numbers.push_back(7);
    numbers.push_back(8);

    for (int number : numbers)
    {
        cout << number << " "; // 1 2 3 4 5 6 7 8
    }

    cout << endl;
    // Iterator
    for (auto i = numbers.begin(); i != numbers.end(); i++)
    {
        *i += 1000;
        cout << *i << " "; // 1001 1002 1003 1004 1005 1006 1007 1008
    }

    cout << "\n";

    // Iterator Reverso
    for (auto i = numbers.rbegin(); i != numbers.rend(); i++)
    {
        *i -= 1000;
        cout << *i << " "; // 8 7 6 5 4 3 2 1
    }

    cout << "\n";
    numbers[0] = 0;

    for (int number : numbers)
    {
        cout << number << " "; // 0 2 3 4 5 6 7 8
    }

    return 0;
}
