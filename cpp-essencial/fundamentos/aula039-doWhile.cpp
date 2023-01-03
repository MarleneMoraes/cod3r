/**
 * @file aula039-doWhile.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 039 - Do While
 */

#include <iostream>
using namespace std;

int main()
{

    /*
        Estrutura do while -> expressao que nao ha
        numero de repeticoes definidas, mas ha
        uma condicao para repetir ENQUANTO for
        verdadeira. A diferenca entre o while e que
        esta sera executada pelo menos uma vez
    */

    int number = -1;

    do
    {
        cout << "Enter a number or -1 to finish: ";
        cin >> number;
    } while (number != -1); // unica estrutura de repeticao que termina com ;

    return 0;
}