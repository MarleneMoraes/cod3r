/**
 * @file aula031-ifChallenge.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 031 - Desafio Maior Numero
 */

/*
   O usuario vai digitar tres numeros
   O programa devera imprimir o maior deles utilizando a estrutura if.
*/

#include <iostream>
using namespace std;

int main()
{
   int a, b, c;
   cout << "Enter a number: ";
   cin >> a;

   cout << "Enter a number: ";
   cin >> b;

   cout << "Enter a number: ";
   cin >> c;

   if (a > b && a > c)
      cout << "The number " << a << " is biggest." << endl;

   if (b > a && b > c)
      cout << "The number " << b << " is biggest." << endl;

   if (c > a && c > b)
      cout << "The number " << c << " is biggest." << endl;

   return 0;
}