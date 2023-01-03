/**
 * @file aula015-std.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 015 - Usando Namespace
 */

#include <iostream>
//para evitar de utilizar o operador de escopo, no caso, std::, utilizar o using
using namespace std;

int main()
{

   //scoping resolution operator = std::
   std::cout << "Good morning!" << std::endl;
   cout << "Good morning!" << endl;
   return 0;
}