/**
 * @file aula016-io.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 016 - Entradas/Saidas
 */

#include <iostream>
using namespace std;

int main()
{
   //Operador de insercao -> cout e a saida padrao do sistema
   cout << "Hi\n";

   //pode ser utilizado um valor literal
   cout << 3.14 << endl;

   //pode utilizar o identificador para imprimir o valor na saida
   int x = 3;
   cout << x << endl;

   
   cout << "Enter your name: ";

   //Operador de extracao -> cin e a entrada padrao do sistema
   string name;
   cin >> name;

   cout << name;
   return 0;
}