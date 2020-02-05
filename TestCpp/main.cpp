//
//  main.cpp
//  TestCpp
//
//  Created by Dominique Pavlin on 05/02/2020.
//  Copyright © 2020 Dominique Pavlin. All rights reserved.
//

#include <iostream>
using namespace std;

class MyException : public exception{
public:
    virtual const char* what() const throw(){
        return "Something bad happened";
    }
};

class Test{
public:
    void goesWrong() {
        throw MyException();
    }
};

int main(int argc, const char * argv[]) {
    Test test;
    
    try{
        test.goesWrong();
    }catch(MyException &e)
    {
        cout << "Cought exception " << e.what() << endl;
    }
    
    cout << "Still running" << endl;
    return 0;
}
