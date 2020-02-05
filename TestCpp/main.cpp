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

#pragma pack(push,1)
struct Person{
    char name[50];
    int age;
    double height;
};
#pragma pack(pop)

int main() {
    string fileName = "test.bin";
    ofstream outFile;
    ifstream inFile;
    
    Person someone = {"Frodo",220,0.8};
    
    outFile.open(fileName,ios::binary);
    if(outFile.is_open())
    {
       outFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
       outFile.close();
    }
    else
    {
        cout << "Could not read file " << fileName << endl;
    }
    
    inFile.open(fileName,ios::binary);
    if(inFile.is_open())
    {
       inFile.read(reinterpret_cast<char *>(&someone), sizeof(Person));
        
        cout << "name : " << someone.name << " - age : " << someone.age << " - height : " << someone.height << endl;
       inFile.close();
    }
    else
    {
        cout << "Could not create file " << fileName << endl;
    }
      
    
    return 0;
}
