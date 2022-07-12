#pragma once
#include ""
class Book
{
  private:
    int bookID;
    char bookTitle[20];
    char bookAuthor[20];
    double bookPrice;
    char bookType[8];
    char bookDescription[50];
    int bookISBN;

  public:
    Book();
    void setBookDetails(int bId, char btitl[], char bAuth[], char bType[], char bDes[], int bISbn);

    void setPrice(double bPrice);
    double getPrice();


    void displayBook();
    ~Book();

};