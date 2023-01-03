/**
 * @file aula022-auto.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 022 - Inferencia de Tipos
 */

#include <iostream>
using namespace std;

int main()
{
   int a = 1;
   double b = 1.2;
   bool c = false;

   cout << tipeid(a).name() << endl // i
        << tipeid(b).name() << endl // d
        << tipeid(c).name() << endl; // b

   //inferencia de tipo (a partir do C++11) -> define um tipo automatico, mas permanece com ele ate o final da compilacao
   auto d = 1; //o compilador define como inteiro
   auto e = 1.2; // o compilador define como double
   auto f = false; // o compilador define como boolean
   return 0;
}