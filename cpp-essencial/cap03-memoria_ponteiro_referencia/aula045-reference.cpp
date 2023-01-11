/**
 * @file aula045-reference.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-30
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 03 - Memoria(Referencia/Ponteiro)
 * Aula 045 - Referencia #01
 */

#include <iostream>
using namespace std;

int main()
{
    /*
        Atribuicao por referencia -> as variaveis apontam
        para o mesmo local de memoria, que possui um unico
        valor
        https://learn.microsoft.com/en-us/cpp/cpp/references-cpp
    */

    int a = 10;

    // imprimir o valor da variavel
    cout << a << "\t"; // 10

    // acessar o endereco de memoria da variavel
    cout << &a << endl;



    string name = "Paul";
    cout << name << "\t" << &name << endl;
    return 0;
}