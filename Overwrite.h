#pragma once
#ifndef OVERWRITE_H
#define OVERWRITE_H

#include <string>

class Overwrite{
private:
    std::string filename, tempText;
public:
    Overwrite(std::string fname);
    void replaceFile(std::string strIn, int row);
};
#endif