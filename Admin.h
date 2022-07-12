#pragma once
#include ""
class Admin
{
  private:
    int adminID;
    char aFirstname[10];
    char aSecondname[10];
    int adminTelno;

  public:
    Admin();
    void setAdminDetails(int aId, char aFirstn[], char aSecn[], int aTeln);

    void displayAdmin();
    ~Admin();

};