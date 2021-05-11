#include <fstream>
#include <string>

#include "Overwrite.h"

Overwrite::Overwrite(std::string fname){
    filename = fname;
}

void Overwrite::replaceFile(std::string strIn, int row){
    std::ifstream FileReader(filename);
    std::ofstream FileWriterTemp("fileTemp.txt");
    int tempAV = 0;
    while (getline(FileReader, tempText)){
        if (tempAV != (row-1))
        {
            FileWriterTemp << tempText << std::endl;
        }
        else if (tempAV == (row-1) && strIn != "")
        {
            FileWriterTemp << strIn;
        }
        tempAV++;
    }
    tempAV = 0;
    FileReader.close();
    FileWriterTemp.close();

    std::remove(filename.c_str());
    std::rename("fileTemp.txt",filename.c_str());
}