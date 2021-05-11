#include <string>
#include <iostream>

#include "Overwrite.h"

void DeleteRecord(std::string fname){
    Overwrite del(fname);
    std::string temp;
    int row;

    std::cout << "Position row: ";
    getline(std::cin, temp);
    std::cout << temp;
    row = stoi(temp);
    del.replaceFile("",row);
}