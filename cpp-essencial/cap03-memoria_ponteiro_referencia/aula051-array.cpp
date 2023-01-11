/**
 * @file aula051-array.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-30
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 03 - Memoria(Referencia/Ponteiro)
 * Aula 051 - Um Pouco Sobre Array
 */

#include <iostream>
using namespace std;

int main()
{

    /*
        O Array e uma estrutura homogenea (do mesmo tipo) e
        indexada (cada valor possui um indice comecando de 0)
        de uma ou multiplas dimensoes que armazena uma serie
        de valores e de tamanho fixo.
    */

    int values_with_length[5]; // inicializar array vazio, apenas com o tamanho
    int values_only_value[] = {31, 44, 58, 91, 25}; // inicializar valores sem indicar o tamanho (a linguagem ira identificar)
    //                         0    1   2   3   4  

    int values[] = {31, 44, 58, 91, 25, 100};

    cout << values[0] << endl; // 31
    cout << values[4] << endl; // 25
    cout << sizeof values[0] << endl; // tamanho em bytes
    cout << sizeof values << endl; // quantidade de elementos do array

    cout <<  sizeof values / sizeof values[0] << endl;

    
    return 0;
}