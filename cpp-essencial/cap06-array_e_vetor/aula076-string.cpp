/**
 * @file aula076-string.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-11
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 06 - Array & Vector
 * Aula 076: String como um Array de Caracteres
 */

#include <iostream>
using namespace std;

/*
    A String e uma estrutura indexada de caracteres.
    Por isso, e possivel acessar qualquer parte da
    string como um array de caracteres.
*/

int main()
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    // Qual a decima letra do alfabeto?
    cout << alphabet[9] << endl; // j

    for (char letter : alphabet)
    {
        cout << letter << " "; // a b c d e f g h i j k l m n o p q r s t u v w x y z
    }

    cout << endl;
    // Substituicao do j por *
    alphabet[9] = '*';

    for (char letter : alphabet)
    {
        cout << letter << " "; // a b c d e f g h i * k l m n o p q r s t u v w x y z
    }

    return 0;
}
