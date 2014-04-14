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

#include <string>
using namespace std;

#ifndef GLOBAL_H
#define GLOBAL_H

extern char title[10];
extern char name[10];
extern int health;
extern int attack;
extern int defence;
extern int exp;
extern int level;
extern int money;
extern string equipW1;
extern string equipW2;
extern string equipW3;
extern string equipW4;

void computer();
void explore();
void weapons();
void items();
#endif
