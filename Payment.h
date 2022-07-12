#pragma once
#include ""
class Payment
{
  private:
    int payID;
    char payDate[10];
    char payType[10];
    double payAmount;
    char payDescription[10];
    
  public:
    Payment();
    void setPaymentDetails(int paId, char paDate[], char mpaType[], char paDesc[]);

    void setpayAmount(double paAmo)

    double getpayAmount();

    void displayPayment();
    ~Payment();

};