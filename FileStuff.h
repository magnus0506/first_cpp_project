//
// Created by Magnus on 06-02-2021.
//

#ifndef PROJECTS_FILESTUFF_H
#define PROJECTS_FILESTUFF_H

#include <iostream>
#include "fstream"
using namespace std;

class FileStuff {
public:
    FileStuff();
    static void createFile(){
        ofstream MyFile("myFile.txt");
        MyFile << "Write stuff bla bla";
        MyFile.close();
    }

    void readFile(string fileName){
        string text;
        ifstream ReadFile("myFile.txt");

        while (getline(ReadFile,text)){
            cout << text;
        }

        ReadFile.close();
    }

};

#endif //PROJECTS_FILESTUFF_H
