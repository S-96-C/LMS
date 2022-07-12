#include "StoreK.h"
#include<string>
#include<iostream>

using namespace std;

StoreKeeper::StoreKeeper()
{
  storekeeperID = 0;
  strcpy(storekName, " ");
  storekTelno = 0;
}

void StoreKeeper::setStorekDetails(int skID, string *skName, int skTeln)
{
  storekeeperID = skID;
  storekName = skName;
  storekTelno = skTeln;
}

void StoreKeeper::displayStoreKeeper()
{
}

StoreKeeper::~StoreKeeper()
{
}



