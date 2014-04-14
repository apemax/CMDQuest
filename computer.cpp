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

void Cmessages()
{
    string runningM = "running";
    int Mopt1;

    cout << "Messaging system." << endl;

    while (runningM == "running")
    {
        cout << "1) New messages." << endl;
        cout << "2) Archived messages." << endl;
        cout << "3) Create message." << endl;
        cout << "4) exit." << endl;

        cin >> Mopt1;

        switch (Mopt1)
        {
            case 1:
            {
                cout << "It worked!" << endl;

                break;
            }

            case 2:
            {
                cout << "It worked!" << endl;

                break;
            }

            case 3:
            {
                cout << "It worked!" << endl;

                break;
            }

            case 4:
            {
                runningM = "stop.";

                break;
            }

            default:
            {
                exit(0);

                break;
            }
        }
    }

}

void journal()
{
    string runningJ = "running";
    int Jopt1;

    cout << "Journal." << endl;

    while (runningJ == "running")
    {
        cout << "1) View entries." << endl;
        cout << "2) New entry." << endl;
        cout << "3) Exit." << endl;

        cin >> Jopt1;

        switch(Jopt1)
        {
            case 1:
            {
                cout << "It worked!" << endl;

                break;
            }

            case 2:
            {
                cout << "It worked!" << endl;

                break;
            }

            case 3:
            {
                runningJ = "stop";

                break;
            }

            default:
            {
                exit(0);

                break;
            }
        }
    }

}

void data()
{
    string runningD = "running";
    int Dopt1;

    cout << "Data archive" << endl;

    while (runningD == "running")
    {
        cout << "1) View data list." << endl;
        cout << "2) Exit." << endl;

        cin >> Dopt1;

        switch(Dopt1)
        {
            case 1:
            {
                cout << "It worked!" << endl;

                break;
            }

            case 2:
            {
                runningD = "stop";

                break;
            }

            default:
            {
                exit(0);

                break;
            }
        }
    }

}

void computer()
{
    string runningWM = "running";
    int doopt1;
    string Username;
    string Password;

    cout << "Booting up..." << endl;

    cout << "Please login." << endl;
    cout << "Username: ";
    cin >> Username;
    cout << "Password: ";
    cin >> Password;

    if(Username == "apemax")
    {
        if(Password == "password")
        {
            while (runningWM == "running")
            {
                cout << "Welcome " << Username << "." << endl;

                cout << "1) Messages" << endl;
                cout << "2) Journal" << endl;
                cout << "3) Data" << endl;
                cout << "4) exit." << endl;

                cin >> doopt1;

                switch (doopt1)
                {
                    case 1:
                    {
                        Cmessages();

                        break;
                    }

                    case 2:
                    {
                        journal();

                        break;
                    }

                    case 3:
                    {
                        data();

                        break;
                    }

                    case 4:
                    {
                        runningWM = "stop";

                        break;
                    }

                    default:
                    {
                        exit(0);

                        break;
                    }
                }
            }
        }

        else
        {
            cout << "Wrong passowrd!" << endl;
        }
    }

    else
    {
        cout << "Wrong userame!" << endl;
    }

}
