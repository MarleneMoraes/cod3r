/**
 * @file aula057-return.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-09
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 04 - Funcoes
 * Aula 057: Retorno de uma Funcao
 */

#include <iostream>
using namespace std;

bool textInConsole(string text)
{
    //varios retornos em uma mesma funcao
    if (text.empty()) return false;
    if (text == "Hi!")
    {
        return false;
    }

    cout << "Text: " << text << endl;
    return true;
}

int main()
{
    
    return 0;
}