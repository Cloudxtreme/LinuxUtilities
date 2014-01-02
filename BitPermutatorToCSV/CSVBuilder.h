//Build a CSV file entry by entry and line by line


#ifndef CSV_BUILDER_H
#define CSV_BUILDER_H


#include <string>
#include <fstream> // using ofstream

class CSVBuilder
{
public:
  CSVBuilder(std::string fileName);
  ~CSVBuilder();
  void addEntry(const std::string & newEntry);
  void nextLine(); // needed because addEntry tacks a , on the end
 protected:
  std::ofstream fout;
};

#endif // CSV_BUILDER_H
