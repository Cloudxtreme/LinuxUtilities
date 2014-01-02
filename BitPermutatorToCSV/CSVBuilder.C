//Build a CSV file entry by entry and line by line

#ifndef CSV_BUILDER_C
#define CSV_BUILDER_C

#include "CSVBuilder.h"
using namespace std;

CSVBuilder::CSVBuilder(string fileName)
{
  //create and open file, checking if it can be made
  fout.open(fileName.data());
  if ( ! fout.is_open() )
    throw "File Could Not Be Created.  Does read-only file exist?";
}

CSVBuilder::~CSVBuilder()
{
  fout.close(); // safely save the file
}

void CSVBuilder::addEntry(const string & newEntry)
{
  fout << newEntry << ",";
}

void CSVBuilder::nextLine()
{
  fout << "\n";
}

#endif // CSV_BUILDER_C
