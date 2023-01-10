/**
 * @file aula029-if.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 029 - If#01
 */

#include <iostream>
using namespace std;

int main()
{
    double finalGrade;
    cout << "Enter the final grade: ";
    cin >> finalGrade;

    // statement
    /*
        if(finalGrade >= 7)
            cout << "Excellent grade." << endl;
    */

   //block of code
    if (finalGrade >= 7)
    {
        cout << "Excellent grade." << endl;
        cout << "Congratulations!" << endl;
    }

    return 0;
}