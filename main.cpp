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
#include "hookManager.h"
using namespace std;

#define DEBUG true
#define debug if(DEBUG) cout

const string VERSION = "1.0.0-alpha";
string getHelpString(string warnString);

int main(int argc, char * argv [])
{
/****************************************************************/
    debug << "Argument count: " << argc
    << "\nArguments:\n" << endl;

    for (int i=0; i < argc; i++)
    {
        debug << i << ": " << argv[i] << endl;
    }
/****************************************************************/
    //Return help string if there are no arguments
    if(argc < 2)
    {
        cout << getHelpString("No arguments given!");
        return 0;
    }

    string subCmd = argv[1];
    //mfw cant use strings in switch statements

    if(subCmd == "help")
    {
        cout << getHelpString("Help argument.");
    }
    else if(subCmd == "add" || subCmd == "create")
    {
        //Add a new webhook
    }
    else if(subCmd == "del" || subCmd == "delete" ||
    subCmd == "remove")
    {
        //Remove an existing webhook
    }
    else if(subCmd == "update" || subCmd == "modify")
    {
        //Update a webhook URL for an existing saved webhook
    }
    else if(subCmd == "send")
    {
        //Send an embed or text message to a webhook
    }
    else if(subCmd == "list")
    {
        //List all saved webhooks
    }
    else {
        //Catch-all
        cout << getHelpString("Unknown argument!");
    }

    return 0;
}


string getHelpString(string warnString)
{
    string str = "Discord Notifier " + VERSION +
    " - by romtec123\n" + warnString + "\n\nUsage: hooknotify [Sub-Command] " +
    "[<Sub-Command Options>]\n\nAvailable sub-commands and their options:\n" +
    "help - Sends this message\n" +
    "add <webhook name> <\"webhook url\"> - Add a new webhook\n" +
    "create <webhook name> <\"webhook url\"> - Add a new webhook\n\n" +
    "del <webhook name> - Delete a saved webhook\n" +
    "delete <webhook name> - Delete a saved webhook\n" +
    "remove <webhook name> - Delete a saved webhook\n\n" +
    "update <webhook name> <\"webhook url\"> - Update the URL of a webhook\n" +
    "modify <webhook name> <\"webhook url\"> - Update the URL of a webhook\n\n" +
    "send <webhook name> <embed / text> <\"Message\"> - Send a message through a webhook\n" +
    "list - Sends a list of all of the saved webhooks\n";

    return str;
}