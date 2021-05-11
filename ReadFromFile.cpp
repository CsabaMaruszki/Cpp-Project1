#include <string>
#include <fstream>
#include <iostream>

#include "ReadFromFile.h"

ReadFromFile::ReadFromFile(){}

void ReadFromFile::readWholeFile(std::string filename){
    std::ifstream FileReader(filename);
    while (getline (FileReader, textTemp))
    {
        std::cout << textTemp << std::endl;
    }

    FileReader.close();
}

void ReadFromFile::readChosenLine(std::string filename, int lno){
    std::ifstream FileReader(filename);
    tempAV = 0;
    while (std::getline (FileReader, textTemp))
    {
        if (tempAV == (lno-1)){
            chosenLine = textTemp;
            break;
            }
        tempAV++;
    }
    tempAV = 0;
    FileReader.close();
}