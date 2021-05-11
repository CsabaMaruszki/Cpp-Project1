#include <string>
#include <fstream>

#include "WriteToFile.h"

WriteToFile::WriteToFile(std::string fn, std::string s){
    std::fstream FileWriter;

    FileWriter.open(fn, std::fstream::app);

    FileWriter << s;

    FileWriter.close();
}