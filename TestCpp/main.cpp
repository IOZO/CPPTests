//
//  main.cpp
//  TestCpp
//
//  Created by Dominique Pavlin on 05/02/2020.
//  Copyright © 2020 Dominique Pavlin. All rights reserved.
//

#include <iostream>
using namespace std;

class CanGoWrong{
public:
    CanGoWrong(){
        char *pMemory = new char[999999999999999];
        delete[]pMemory;
    }
};

int main(int argc, const char * argv[]) {
    try{
        CanGoWrong wrong;
    }catch(bad_alloc &e)
    {
        cout << "Cought exception " << e.what() << endl;
    }
    
    cout << "Still running" << endl;
    return 0;
}
