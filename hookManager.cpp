/****************************************************************
* Author: romtec123                                             *
* Date: March 14 2023                                           *
* File: hookManager.cpp                                         *
*                                                               *
* Description: This class will provide methods for managing     *
* the webhooks.                                                 *
****************************************************************/
#include "hookManager.h"


hookManager::hookManager()
{
    this->name = "Unnamed";
    this->url = "";
}

hookManager::~hookManager ()
{
}

hookManager::hookManager (const string & name, const string & url)
{
    //Input validation is in the setName and setURL methods
    this->setName(name);
    this->setURL(url);
}

void hookManager::updateUrl (const string & name, const string & url)
{

}

void hookManager::removeHook (const string & name)
{

}

void hookManager::saveToDisk(const string & name)
{

}

void hookManager::loadFromDisk(const string & name)
{

}

void hookManager::deleteFromDisk(const string & name)
{

}

void hookManager::setName (const string & name)
{

}

void hookManager::setURL (const string & URL)
{

}