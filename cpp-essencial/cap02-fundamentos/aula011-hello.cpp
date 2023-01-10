/**
 * @file aula011-hello.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 011 - Primeiro Programa
 */

// Diretivas de Pre-processador
#include <iostream>

/*
    "Porta de entrada" para o programa C++
    é a função Main
*/
int main()
{
    std::cout << "Hello World!";

    /*
        A função main() possui retorno int,
        logo, caso retorne 0, significa que
        o programa terminou bem-sucedido.
    */
    return 0;
}