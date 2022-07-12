#pragma once
class StoreKeeper
{
  private:
    int storekeeperID;
    string storekName;
    int storekTelno;

  public:
    StoreKeeper();
    void setStorekDetails(int skId, string skName, int skTeln);

    void displayStoreKeeper();
    ~StoreKeeper();

};