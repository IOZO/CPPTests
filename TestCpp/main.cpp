//
//  main.cpp
//  TestCpp
//
//  Created by Dominique Pavlin on 05/02/2020.
//  Copyright © 2020 Dominique Pavlin. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
   
    ofstream outFile;
    string fileName ="testcpp.txt";
    
    outFile.open(fileName);
    if(outFile.is_open())
    {
        outFile << "Hello there" << endl;
        outFile << 12345 << endl;
        outFile.close();
        
        cout << "File created"<<endl;
        
    }
    else
    {
        cout << "Could not create file " << fileName << endl;
        return -1;
    }
    
    // Read File
    ifstream inFile;
    inFile.open(fileName);
    
    if(inFile.is_open())
    {
        string line;
        while(inFile){
            getline(inFile,line);
            cout << line << endl;
        }
        inFile.close();
    }
    else
    {
        cout << "Could not open file " << fileName << " for reading" << endl;
        return -1;
    }
    
    
    return 0;
}
