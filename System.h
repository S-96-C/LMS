#pragma once
#include ""
class System
{
  private:
    int systemID;
    string systemPassword[15];

  public:
    System();
    void setSystemDetails(int sId);

    void setPassword(string sPass)

    double getPassword();

    void displaySystem();
    ~System();

};