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

class item_HPUP {

    public:
        int m_H_amount; //Stores how much a item heals by.

        void m_H_func()
        {

        }

        void m_H_info()
        {
            cout << "Increases max health by " << m_H_amount << endl;
        }

};

item_HPUP HPUPW;

// The use item function.
void UseItem()
{
    string UseItemopt;

    cout << "What?" << endl;

    cin >> UseItemopt;

    if (UseItemopt == "HPUPW")
    {
        health = health + HPUPW.m_H_amount;

        cout << "It worked!" << endl;
    }
}

// The view item function.
void ViewItem()
{
    string ViewItemopt;

    cout << "What?" << endl;

    cin >> ViewItemopt;

    if (ViewItemopt == "HPUPW")
    {
        HPUPW.m_H_info();

        cout << "It worked!" << endl;
    }
}

void items()
{
    HPUPW.m_H_amount = 5;

    string UseItemopt1;
    int UseItemopt2;
    string runningWM = "running";

    while (runningWM == "running")
        {

        cout << "What do you want to do?" << endl;

        cin >> UseItemopt1;

        if (UseItemopt1 == "use") {
            UseItemopt2 = 1;
        }

        else if (UseItemopt1 == "view"){
            UseItemopt2 = 2;
        }

        else if (UseItemopt1 == "exit") {
            UseItemopt2 = 3;
        }

        switch (UseItemopt2)
        {
            case 1:
            {
                UseItem();

                break;
            }

            case 2:
            {

                ViewItem();

                break;
            }


            case 3:
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
