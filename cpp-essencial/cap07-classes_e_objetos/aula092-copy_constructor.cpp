/**
 * @file aula092-copy_constructor.cpp
 * @author Marlene Moraes
 * @version 0.1
 * @date 2023-01-12
 *
 * @copyright Copyright (c) 2023
 *
 * Capitulo 07 - Classes & Objetos
 * Aula 092: Copy Constructor
 */

#include <iostream>
using namespace std;

class Player
{
public:
    string name;
    int health;

    Player(string name, int health = 100) : name(name), health(health) {}
    // Construtor copia
    Player(const Player &p) : name(p.name), health(p.health)
    {
        cout << "copy..." << endl;
    }

    ~Player()
    {
        cout << "Player destroyed" << endl;
    }
};

// void printPlayer(Player p) // uma copia de Player p sera criada
void printPlayer(const Player &p)
{
    cout << p.name << " [" << p.health << "%]" << endl;
}

int main()
{
    Player play("Monster");
    printPlayer(play);

    return 0;
}
