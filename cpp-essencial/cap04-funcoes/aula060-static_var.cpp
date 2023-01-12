/**
 * @file aula060-static_var.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-09
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 04 - Funcoes
 * Aula 060: Variavel Estatica
 */

#include <iostream>
using namespace std;

/*
    static -> o codigo sera executado apenas 
    uma vez quando essa funcao for inicializada
*/



int nextId(){
    static int id = 1;
    return id++;
}


int main()
{
    cout << nextId() << endl;
    cout << nextId() << endl;
    cout << nextId() << endl;
    cout << nextId() << endl;

    return 0;
}
