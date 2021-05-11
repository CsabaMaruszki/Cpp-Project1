#pragma once
#ifndef READFROMFILE_H
#define READFROMFILE_H

#include <string>

class ReadFromFile{
private:
    std::string textTemp;
    std::string chosenLine;
    std::string file;
    int tempAV;
public:
    ReadFromFile();
    void readWholeFile(std::string filename);
    void readChosenLine(std::string filename, int lno);
    std::string getChosenLine(){return chosenLine;}
};

#endif