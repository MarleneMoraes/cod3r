/**
 * @file aula012.cpp
 * @author Marlene Moraes 
 * @version 0.1
 * @date 2022-12-28
 * 
 * @copyright Copyright (c) 2022
 * 
 * Capitulo 02 - Fundamentos
 * Aula 012 - Anatomia de um codigo C++
 */

#include <iostream>

/*
   O bloco de codigo e um grupo de uma ou 
   mais sentencas.
*/ 
int main() {

    /* 
       A sentenca e a unidade sintatica 
       imperativa de uma linguagem de programacao.
    */
    std::cout << "Hi there!";

    /* 
       As sentencas podem ter mais de uma linha e 
       serao executadas ate o ponto-e-virgula.
    */
    std::cout
        <<
        " Bye!"
        <<
        std::endl; // pula uma linha para execucao 
                  // da proxima sentenca

        std::cout << "end!";
    return 0;  
}