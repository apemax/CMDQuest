/*
    This file is part of CMDQuest.

    CMDQuest is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    CMDQuest is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with CMDQuest.  If not, see <http://www.gnu.org/licenses/>.
*/
// Copyright (C) 2011 - 2013 Peter Wright
// author: Peter (apemax) Wright
// version: 0.0.7
// CMDQuest

#include <iostream>
#include <stdlib.h>
#include "global.h"
using namespace std;

class weapon {

    public:
        int m_attack; //stores attack strength of weapon.
        int m_defence; //stores defence strength of weapon.

        void m_attack_func ()
        {

        }

};

weapon sword;

// The weapon equip function.
void equipW()
{
    string equipWopt;

    cout << "What?" << endl;

    cin >> equipWopt;

    if (equipWopt == "sword")
    {
        attack = attack + sword.m_attack;

        equipW1 = "sword";

        cout << "It worked!" << endl;
    }


}

// The weapon unequip function.
void unequipW()
{
    string equipWopt;

    cout << "what?" << endl;

    cin >> equipWopt;

    if (equipWopt == "sword")
    {
        attack = attack - sword.m_attack;

        equipW1 = "nothing";

        cout << "It worked!" << endl;
    }

}

void weapons()
{
    sword.m_attack = 10;

    string equipopt1;
    int equipopt2;
    string runningWM = "running";

    while (runningWM == "running")
        {

        cout << "What do you want to do?" << endl;

        cin >> equipopt1;

        if (equipopt1 == "equip") {
            equipopt2 = 1;
        }

        else if (equipopt1 == "unequip"){
            equipopt2 = 2;
        }

        else if (equipopt1 == "view"){
            equipopt2 = 3;
        }

        else if (equipopt1 == "exit") {
            equipopt2 = 4;
        }

        switch (equipopt2)
        {
            case 1:
            {
                equipW();

                break;
            }

            case 2:
            {

                unequipW();

                break;
            }

            case 3:
            {

                cout << sword.m_attack << endl;

                break;
            }


            case 4:
            {
                runningWM = "stopped";

                break;
            }

            default:

                cout << "exiting..." << endl;

                exit (0);

                break;

        }
        }
}
