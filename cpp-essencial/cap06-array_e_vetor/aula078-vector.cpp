/**
 * @file aula078-vector.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-11
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 06 - Array & Vector
 * Aula 078: Vector #02
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;
    numbers.assign(10, 1); // "monta" um vetor de 10 elementos de valor 1

    for (auto number : numbers)
    {
        cout << number << " "; // 1 1 1 1 1 1 1 1 1 1
    }

    cout << endl;

    numbers[0] = 0;
    numbers[8] = 8;

    numbers.erase(numbers.begin() + 9); // apaga o elemento 9, pois 0 + 9

    for (auto number : numbers)
    {
        cout << number << " "; // 0 1 1 1 1 1 1 1 8
    }

    cout << endl;

    numbers.clear(); // exclui todos os elementos
    cout << numbers.size();

    return 0;
}
