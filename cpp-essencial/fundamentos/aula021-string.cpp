/**
 * @file aula021-string.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 021 - Tipo String
 */

#include <iostream>
using namespace std;

int main()
{
   // string e uma classe: objeto que representa uma sequencia de caracteres

   // Maneiras de inicializar a string
   string title = "Mr. ";
   string name("John");
   string end(10, '!'); // duplicar a string pelo numero de vezes indicada

   // Metodos da string
   // contagem de caracteres
   cout << name.size() << endl;

   // retorno do ultimo caractere
   cout << name.back() << endl;

   // retorno de um caractere especifico
   cout << name[2] << endl;


   // concatenacao das strings
   cout << title + name + end << endl;// Mr. John!!!!!!!!!!

   name += " Doe";
   name.append(end);
   cout << name << endl; // John Doe!!!!!!!!!!

   return 0;
}