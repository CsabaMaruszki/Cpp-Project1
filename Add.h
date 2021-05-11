#pragma once
#ifndef ADD_H
#define ADD_H

#include <string>

class Add{
private:
    std::string fname;
    std::string sname;
    std::string course;
    std::string year;
    std::string finalData;
public:
    Add();
    void askData();
    std::string getFinalData(){return finalData;}
};

#endif