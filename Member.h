#pragma once
#include ""
class Member
{
  private:
    int memID;
    char memEmail[30];
    char memAddress[50];
    char memType[10];
    char firstName[10];
    char secondName[10];
    int memTelno;

  public:
    Member();
    void setMemberDetails(int mId, char mEmail[], char mAdd[], char mType[], char mFirstn[], char mSecn[], int mTelno);

    void displayMember();
    ~Member();

};