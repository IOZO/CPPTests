//
//  Template.hpp
//  TestCpp
//
//  Created by Dominique Pavlin on 13/02/2020.
//  Copyright © 2020 Dominique Pavlin. All rights reserved.
//

#ifndef Template_hpp
#define Template_hpp

#include <iostream>
using namespace std;

template <class T>
class Test{
private:
    T obj;
    
public:
    Test(T obj)
    {
        this->obj = obj;
    }
    
    void print(){
        cout << obj << endl;
    }
};




#endif /* Template_hpp */
