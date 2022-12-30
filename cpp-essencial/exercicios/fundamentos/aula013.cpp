/**
 * @file aula013.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-28
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 013 - Imprimindo no Console
 */

#include <iostream>
#include <cstdio> //biblioteca da linguagem C

int main()
{

   /*
      std (standard) é um namespace.
      Namespaces são nomenclaturas da
      linguagem para identificar no escopo.
   */
   std::cout << "Hello C++" << std::endl;

   printf("Hello C in C++\n");
   puts("Hello C in C++ with puts");
   return 0;
}