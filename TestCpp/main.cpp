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
    Complex c1(1,4);
    Complex c2 (4,6);
    cout << c1 << " " << c2 << endl;
    
    cout << 7+c1+8.5+c2 << c1+5 << endl;
    return 0;
}

