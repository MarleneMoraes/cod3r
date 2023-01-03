/**
 * @file aula014-variable.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 014 - Variavel
 */

#include <cstdio>

int main()
{

   // C++, assim como o C possui tipagem estática

   // tipo identificador = valor;
   int age = 28;

   // tipo identificador;
   // identificador = valor;
   int year;
   year = 2022;


   double price = 99.80;
   double tax = 0.08;

   price * (1 + tax); // retorna um warning pelo nao uso

   // tipo identificador = expressao
   double final_price = price * (1 + tax);

   printf("The final price is %.2f.\n", final_price);
   printf("Age: %d", age);

   return 0;
}