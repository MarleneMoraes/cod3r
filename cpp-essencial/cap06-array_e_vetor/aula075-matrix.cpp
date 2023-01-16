/**
 * @file aula075-matrix.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-11
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 06 - Array & Vector
 * Aula 075: Array Multidimensional
 */

#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };

    cout << matrix[1][2]; //6

    return 0;
}
