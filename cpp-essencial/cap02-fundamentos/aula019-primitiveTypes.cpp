/**
 * @file aula019-primitiveTypes.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 019 - Tipos Primitivos #01
 */

#include <iostream>
using namespace std;

/*
   Teoria:
   - https://pt.cppreerence.com/w/cpp/language/types
   - https://www.geeksforgeeks.org/c-data-types
*/

int main()
{
   // Tipo boolean: qualquer numero diferente de zero e verdadeiro e o zero e falso OU as palavras reservadas true e false.
   bool isAdmin = 1;
   cout << isAdmin << endl; // 1

   isAdmin = 0;
   cout << isAdmin << endl; // 0

   isAdmin = true;
   cout << isAdmin << endl; // 1

   isAdmin = false;
   cout << isAdmin << endl; // 0

   isAdmin = 2000;
   cout << isAdmin << endl; // 1

   // Tipo char: representacao de um unico simbolo (caractere)
   char symbol = '#';
   cout << symbol << endl; // #

   // outra maneira de criar char
   char other_symbol('#');
   cout << other_symbol << endl; // #

   // Tipo int: armazena apenas numeros inteiros
   int age = 31;
   cout << age << endl; // 31

   

   // Tipos float e double: armazena numeros flutuantes ou decimais
   float pi = 3.14;
   cout << pi << endl; // 3.14

   const double PI = 3.141592; // ha diferencas entre maiusculas e minusculas no c++
   cout << PI << endl; // 3.141592


   /* 
      Ha modificadores dos tipos de espaco de armazenamento 
      de memoria ou que gostaria que os numeros sejam
      representados com ou sem sinal (apenas positivos).
      E importante lembrar de tomar cuidado com a otimizacao, 
      pois pode prejudicar a performance da aplicacao caso seja
      com valores muito grandes, por exemplo.
   */
   unsigned short int new_age = 31; // modificador para menor espaco de memoria e representacao sem signal
   cout << new_age << endl; // 31
   
   return 0;
}
