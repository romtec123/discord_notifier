/****************************************************************
* Author: romtec123                                             *
* Date: March 14 2023                                           *
* File: main.cpp                                                *
*                                                               *
* Description: This utility allows the user to add webhooks     *
* with a name, list webhooks, update webhooks, and send         *
* messages through a shell.                                     *
****************************************************************/
#include <iostream>
#include <vector>
#include <fstream>
#include "hookManager.h"
using namespace std;

int main (int argc, char * argv [])
{
    cout << "Argument count: " << argc << "\nArguments:\n" << endl;

    for (int i=0; i < argc; i++)
    {
        cout << i << ": " << argv[i] << endl;
    }

    return 0;
}
