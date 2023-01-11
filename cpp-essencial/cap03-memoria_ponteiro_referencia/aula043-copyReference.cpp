/**
 * @file aula043-copyReference.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-30
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 03 - Memoria(Referencia/Ponteiro)
 * Aula 043 - Atribuicao por Copia vs Referencia
 */

#include <iostream>
using namespace std;

int main()
{
   
    int a = 2;
    int b = a;
    int c;

    /*
        Atribuicao por referencia -> as variaveis apontam
        para o mesmo local de memoria, que possui um unico
        valor -> 
    */

    Object a = new Object(); // 0x5fe7
    Object b = a;            // 0x5fe7
    Object c;                // null

    return 0;
}