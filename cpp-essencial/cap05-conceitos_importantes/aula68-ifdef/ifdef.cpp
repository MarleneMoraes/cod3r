/**
 * @file ifdef.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-10
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 05 - Alguns Conceitos Importantes
 * Aula 068: IFDEF
 */

#define ZERO 0 // token ZERO / identificador 0
#define SQUARE(X) X *X
#include <iostream>
using namespace std;

/*
    IFDEF -> diretiva de preprocessador de validacao 
    de definicao (se estiver definido, execute). Pode
    ser utilizado em qualquer local da aplicacao.
    
    Ideal utilizar essa diretiva para preparacao do codigo 
    antes do processamento
*/

int main()
{
    #ifdef SQUARE

        cout << SQUARE(10) << endl; 
    
        cout << SQUARE(1 + 2) << endl;
    #else
        cout << "else.."<< endl;
    #endif

    //Se estar no modo DEBUG
    #if DEBUG == 1
        cout << "end..." << endl;
    #endif 
    
    return ZERO;
}
