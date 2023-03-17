/****************************************************************
* Author: romtec123                                             *
* Date: March 14 2023                                           *
* File: hookManager.h                                           *
*                                                               *
* Description: This class will provide methods for managing     *
* the webhooks.                                                 *
****************************************************************/

#ifndef DISCORD_NOTIFY_HOOKMANAGER_H
#define DISCORD_NOTIFY_HOOKMANAGER_H

#include <string>
using namespace std;

class hookManager {

    public:
    hookManager ();
    ~hookManager ();
    hookManager (const string & name, const string & url);
    void updateUrl (const string & name, const string & url);
    void removeHook (const string & name);

    private:
    string name;
    string url;
    void saveToDisk (const string & name);
    void loadFromDisk (const string & name);
    void deleteFromDisk (const string & name);
    void setName (const string & name);
    void setURL (const string & URL);
};


#endif //DISCORD_NOTIFY_HOOKMANAGER_H
