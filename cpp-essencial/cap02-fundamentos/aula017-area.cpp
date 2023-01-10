/**
 * @file aula017-area.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 017 - Desafio Area da Circunferencia
 */

/*
   Calcular a area da circunferencia com os dados:
   PI = 3.1415
   PI * radius * radius
*/

#include <iostream>
using namespace std;

int main()
{
   const double PI = 3.1415; //declaracao de constantes
   double area;
   double radius;

   cout << "Raio: ";
   cin >> radius;

   area = PI * radius * radius;

   cout << "Area: " << area << endl;
   return 0;
}