/**
 * @file aula035-while.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 035 - While #01
 */

#include <iostream>
using namespace std;

int main()
{
    /*
        Estrutura while -> expressao que nao ha
        numero de repeticoes definidas, mas ha
        uma condicao para repetir ENQUANTO for
        verdadeira
    */

   /* 
        Calcular media enquanto a entrada for 
        diferente de -1 
   */

    int number = 0;
    int total = 0;
    int quantitity = 0;

    while (number != -1)
    {
        cout << "Enter a number or -1 to finish: ";
        cin >> number;

        if(number != -1){
            total += number;
            quantitity++;
        }    
    }

    //casting -> conversao de tipos para leitura
    double avg = ((double) total) / quantitity;
    cout << avg << endl; //retornara o tipo double
    return 0;
}