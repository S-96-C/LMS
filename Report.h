#pragma once
class Report
{
  private:
    int reportID;
    char reportType[10];
    char reportDescription[10];

  public:
    Report();
    void setReportDetails(int rId, char rType[], char rDesc[]);

    void displayReport();
    ~Report();

};