/**
 * @file aula052-pointer.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-30
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 03 - Memoria(Referencia/Ponteiro)
 * Aula 052 - Ponteiro #03
 */

#include <iostream>
using namespace std;

int main()
{
    /*
        Aritmetica de ponteiros: e possivel percorrer
        os elementos de um array com um unico ponteiro
    */

    int arr[] = {47, 33, 72, 13, 88};
    int *p1 = &arr[0];

    cout << *p1 << endl; // 47

    p1++;                // incremento no ponteiro
    cout << *p1 << endl; // 33

    p1++;
    cout << *p1 << endl; // 72

    cout << p1[0] << endl; //[0] mesmo que *
    cout << p1[1] << endl; // aponta para o proximo, no caso, do 72
    cout << p1[2] << endl; // 88

    int w = 123;
    int *p2 = &w;

    cout << p2 << endl;    // local de memoria
    cout << *p2 << endl;   // 123
    cout << p2[0] << endl; // mesmo nao sendo um array, ele acessa o valor

    *p2 = 321; // alteracao a partir de um ponteiro
    cout << *p2 << endl; // 321
    cout << w << endl;   // 321
    return 0;
}