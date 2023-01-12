/**
 * @file aula053-function.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-09
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 04 - Funcoes
 * Aula 053: Basico Sobre Funcoes #01
 */

#include <iostream>
using namespace std;

/*
    Define uma acao de codigo que pode ser repetida
    Ideal e sempre ter funcoes pequenas com nomes
    bem definidos para uma boa leitura e execucao 
    do programa
*/

// Em C++, defina funcoes antes da funcao main
// Funcao sem retorno e parametros
void sayHello()
{
    cout << "Hello!" << endl;
}

// Funcao com parametros
void sayHelloTo(string name)
{
    cout << "Hello" << name << "!" << endl;
}

/*
    Funcao com retornos: o retorno pode ser tratado em cada 
    caso no codigo armazenando em uma variavel, mas pode ser
    impressa diretamente no console.
*/ 
string returnHi()
{
   return "Hi";
}

string returnHiTo(string name)
{
   return "Hi " + name + "!";
}

int main()
{
    
    sayHello();
    sayHello(); // repetira o bloco de codigo

    sayHelloTo("Peter");

    string result = returnHi();
    result.append("!");
    cout << result << endl;
    cout << returnHi() << endl;

    result = returnHiTo("Hannah");
    cout << result << endl;

    return 0;
}