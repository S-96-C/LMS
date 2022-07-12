#pragma once
#include ""
class Librarian
{
  private:
    int libID;
    char libEmail[20];
    char libFirstname[10];
    char libSecondname[10];
    int libTelno;
    char libDesignation[10];
    char libAddress;

  public:
    Librarian();
    void setLibrarianDetails(int lId, char lEmail[], char lFirstn[], char lSecn[], int lTelno, char lDesig[], lAdd[]);

    void displayLibrarian();
    ~Librarian();

};