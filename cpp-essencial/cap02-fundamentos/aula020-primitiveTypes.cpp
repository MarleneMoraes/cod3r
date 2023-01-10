/**
 * @file aula020-primitiveTypes.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 020 - Tipos Primitivos #02
 */

#include <iostream>
using namespace std;

int main()
{
   // Modificadores de tipos de dados
   // signed unsigned long short

   short int n1 = 1;
   long int n2 = 1;
   unsigned int n3 = 1;
   long long int n4 = 1;

   cout << n1 + n2 + n3 + n4 << endl; // 4

   cout << sizeof(char) << " byte(s)" << endl; // 1 byte(s)
   
   cout << sizeof(char16_t) << " byte(s)" << endl; // 4 byte(s)
   
   cout << sizeof(char32_t) << " byte(s)" << endl; // 2 byte(s)

   // Wide Character
   cout << sizeof(wchar_t) << " byte(s)" << endl; // 4 byte(s)

   cout << sizeof(int) << " byte(s)" << endl; // 4 byte(s)
   
   cout << sizeof(long int) << " byte(s)" << endl; // 4 byte(s)
   
   cout << sizeof(long long int) << " byte(s)" << endl; // 8 byte(s)
   
   cout << sizeof(float) << " byte(s)" << endl; // 4 byte(s)
   
   cout << sizeof(double) << " byte(s)" << endl; // 8 byte(s)

   return 0;
}