/**
 * @file aula044-copy.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-30
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 03 - Memoria(Referencia/Ponteiro)
 * Aula 044 - Atribuicao por Copia
 */

#include <iostream>
using namespace std;

int main()
{
    /*
       Atribuicao por copia -> apenas o valor foi
       atribuido a variavel: os valores das variaveis
       sao independentes, pois não gerarao impacto uma
       na outra
   */
  
    int a = 2;
    int b = a; // atribuido a copia do valor
    a++;
    b--;

    cout << a << " " << b; // 3 1

    return 0;
}