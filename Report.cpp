#include "Report.h"
#include<cstring>
#include<iostream>

using namespace std;

Report::Report()
{
  reportID = 0;
  strcpy(reportType, " ");
  strcpy(reportDescription, " ");
}

void Report::setReportDetails(int rID, char rType[], char rDesc[])
{
  reportID = rID;
  strcpy(reportType, rType);
  strcpy(reportDescription, rDesc);
}

void Report::displayReport()
{
}

Report::~Report()
{
}

