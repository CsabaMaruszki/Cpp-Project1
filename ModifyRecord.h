#pragma once
#ifndef MODIFYRECORD_H
#define MODIFYRECORD_H

#include <string>
#include <vector>

class ModifyRecord{
private:
    int row, column;
    std::string temp, temp2, splitTextStr, filename, textToReplace;
    std::vector<std::string> splitTextV;

public:
    ModifyRecord();
    void askPosition(std::string fname);
    void splitString();
    void replaceData();
    void backToString();
};

#endif