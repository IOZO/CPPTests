//
//  main.cpp
//  TestCpp
//
//  Created by Dominique Pavlin on 05/02/2020.
//  Copyright © 2020 Dominique Pavlin. All rights reserved.
//

#include <iostream>
#include "Complex.hpp"

using namespace std;
using namespace iozocpp;

int main()
{
    Complex c1;
    
    //cout << "reel " << c1.real << ", imaginary : " << c1.imaginary << endl;
    Complex c2(1,4);
    
    Complex c3 (c1);
    
    c1 = c2;
    
    cout << c1 << "   " << c3 << endl;
    
    return 0;
}

