#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>

#include "Menu.h"
#include "FileName.h"
#include "ReadFromFile.h"
#include "Add.h"
#include "WriteToFile.h"
#include "ModifyRecord.h"
#include "Overwrite.h"
#include "DeleteRecord.h"

using namespace std;

class SelectTask
{
private:
    int choice;
    string temp;
    FileName fn;
    Add add;
    ReadFromFile rf;
    ModifyRecord mod;

public:
    SelectTask()
    {
        getline(cin, temp);
        choice = stoi(temp);
        switch (choice)
        {
        case 1:
            system("clear");
            fn.askFileName();
            system("clear");
            add.askData();
            WriteToFile(fn.getFileName(), add.getFinalData());
            break;
        case 2:
            system("clear");
            fn.askFileName();
            system("clear");
            rf.readWholeFile(fn.getFileName());
            break;
        case 3:
            system("clear");
            fn.askFileName();
            system("clear");
            rf.readWholeFile(fn.getFileName());
            mod.askPosition(fn.getFileName());
            break;
        case 4:
            system("clear");
            fn.askFileName();
            DeleteRecord(fn.getFileName());
            system("clear");
            break;
        case 5:
            system("clear");
            exit(1);
            break;
        default:
            system("clear");
            Draw();
        }
    }
};

int main()
{
    Draw();
    SelectTask();
    return 0;
}