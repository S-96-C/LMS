#include "System.h"
#include<cstring>
#include<iostream>

using namespace std;
System::System()
{
  systemID = 0;
  strcpy(systemPassword, " ");
}

void System::setSystemDetails(int sID)
{
  systemID = sID;
}

void System::setPassword(string sPass)
{

}

void System::getPassword()
{
}

void System::displaySystem()
{
}

System::~System()
{
}

