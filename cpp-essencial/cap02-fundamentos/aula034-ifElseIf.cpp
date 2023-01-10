/**
 * @file aula034-ifElseIf.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2022-12-29
 *
 * @copyright Copyright (c) 2022
 *
 * Capitulo 02 - Fundamentos
 * Aula 034 - If/Else If
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

    /*
        if (a >= b && a >= c)
        {
            cout << "The number " << a << " is biggest." << endl;
        }
        else
        {
            cout << "else #01..." << endl;
            if (b >= a && b >= c)
            {
                cout << "The number " << b << " is biggest." << endl;
            }
            else
            {
                cout << "else #02..." << endl;
                if (c >= a && c >= b)
                {
                    cout << "The number " << c << " is biggest." << endl;
                }
            }
        }
    */

    if (a >= b && a >= c)
    {
        cout << "The number " << a << " is biggest." << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << "else #01..." << endl;
        cout << "The number " << b << " is biggest." << endl;
    }
    else
    {
        cout << "else #02..." << endl;
        cout << "The number " << c << " is biggest." << endl;
    }

    return 0;
}