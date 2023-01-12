/**
 * @file aula059-scope.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-09
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 04 - Funcoes
 * Aula 059: Pilha de execucao & Escopo
 */

#include <iostream>
using namespace std;

/*
    Pilha de execucao
    function3();    // executara debaixo para cima
    function2();
    function1();
    main();

    Problema de StackOverFlow: quando a funcao nao 
    possui condicao de parada
*/
int g = 1; // variavel global

void function3()
{
    //int g = 0; // sombreamento de variaveis
    //g += 100;
    cout << "exec...";
}

void function2()
{
    g += 10;
    function3();
}

void function1()
{
    g += 1;
    function2();
}

/*
    Escopo: visibilidade dos blocos -> nao sera executado
    caso nao esteja no bloco. Ideal que as variaveis sejam
    locais, exceto se for uma constante.
*/

int main()
{

    function1();
    cout << g << endl;
    return 0;
}
