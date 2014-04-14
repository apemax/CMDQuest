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
#include <string>
#include "global.h"
using namespace std;

int main()
{
    string opt1;
    string running = "running";
    string choice1;
    int choice2 = 0;

    cout << "Welcome to CMDQuest. Do you want to start a new game or load a game?" << endl;
    cout << "Type new to start a new game and load to load a game." << endl;
    cout << "Note: Load game doesn't work yet." << endl;

    cin >> opt1;

    // Still need to figure out how to save and load...
    if (opt1 == "load"){
        cout << "Load not working yet!" << endl;
    }
    else if (opt1 == "new") {

        cout << "Please enter your name (Max 10 letters.): ";
        cin >> name;

        //The main game loop.
        while (running == "running")
        {
            cout << "Choose what to do: ";

            cin >> choice1;

            if (choice1 == "explore") {
                choice2 = 1;
            }

            else if (choice1 == "weapons") {
                choice2 = 2;
            }

            else if (choice1 == "items") {
                choice2 = 3;
            }

            else if (choice1 == "computer") {
                choice2 = 4;
            }

            else if (choice1 == "stats") {
                choice2 = 5;
            }

            else if (choice1 == "exit") {
                choice2 = 6;
            }

            switch (choice2)
            {
                case 1:
                {
                    explore();

                    cout << "It works!" << endl;

                    break;
                }

                case 2:
                {
                    weapons();

                    cout << "It works!" << endl;

                    break;
                }

                case 3:
                {
                    items();

                    cout << "It works!" << endl;

                    break;
                }

                case 4:
                {
                    computer();

                    cout << "It works!" << endl;

                    break;
                }

                case 5:
                {
                    cout << "Title: " << title << "Name: " << name << endl;

                    cout << "Health = " << health << " Attack = " << attack << " Defence = " << defence << endl;

                    cout << "Exp = " << exp << " Level = " << level << " Money = " << money << endl;

                    cout << "Equipped weapons: " << equipW1 << ", " << equipW2 << ", " << equipW3 << ", " << equipW4 << endl;

                    break;
                }

                case 6:
                {
                    running = "stop";

                    break;
                }

                default:

                    cout << "exiting..." << endl;

                    exit (0);

                    break;

            }
        }
    }

    else if (opt1 == "exit") {

    cout << "Exiting..." << endl;

    exit (0);

    }
}
