#pragma once
#include ""
class Publisher
{
  private:
    int publisherID;
    char publisherName[10];
    int yearOfpub;
    char publisherAddress[15];
    int publisherTelno;

  public:
    Publisher();
    void setPublisherDetails(int pId, char pName[], int pYear, char pAdd, int pTelno);

    void displayPublisher();
    ~Publisher();

};