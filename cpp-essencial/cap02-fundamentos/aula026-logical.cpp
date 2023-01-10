/**
 * @file aula026-logical.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 026 - Operadores Logicos
 */

#include <iostream>
using namespace std;

int main()
{
    // Operadores Logicos

    double finalGrade;
    cout << "Enter the final grade: ";
    cin >> finalGrade;

    bool goodBehavior;
    cout << "Is he/she well-behaved?";
    cin >> goodBehavior;

    // Operadores Logicos binarios
    //  Operador Logico E (&&)
    bool goodStudent = finalGrade >= 9 && goodBehavior;

    // Operador OU exclusivo (^ !=)
    bool averageStudent = finalGrade >= 9 ^ goodBehavior;

    // Operador OU (||)
    bool loanCancelled = finalGrade <= 3 || !goodBehavior;

    // Operador unario
    // Operador negacao (!)
    bool badStudent = finalGrade <= 3 && !goodBehavior;

    cout << "Good student?" << goodStudent << endl;
    cout << "Average student?" << averageStudent << endl;
    cout << "Bad student?" << badStudent << endl;
    cout << "Will the loan be cancelled?" << loanCancelled << endl;

    // Tabela Verdade
    // E (&&)
    cout << "AND (&&)" << endl;
    cout << (true && true) << endl; // 1
    cout << (true && false) << endl; // 0
    cout << (false && true) << endl; // 0
    cout << (false && false) << endl; // 0

    // OU (||)
    cout << "OR (||)" << endl;
    cout << (true || true) << endl; // 1
    cout << (true || false) << endl; // 1
    cout << (false || true) << endl; // 1
    cout << (false || false) << endl; // 0

    // OU EXCLUSIVO (^ !=)
    cout << "XOR (^ !=)" << endl;
    cout << (true ^ true) << endl; // 0
    cout << (true ^ false) << endl; // 1
    cout << (false ^ true) << endl; // 1
    cout << (false ^ false) << endl; // 0

    //NEGACAO (!)
    cout << "NOT (!)" << endl;
    cout << (!true) << endl; // 0
    cout << (!false) << endl; // 1
    cout << (!!false) << endl; // 0      //dupla negacao

    return 0;
}