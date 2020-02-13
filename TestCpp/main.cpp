//
//  main.cpp
//  TestCpp
//
//  Created by Dominique Pavlin on 05/02/2020.
//  Copyright © 2020 Dominique Pavlin. All rights reserved.
//

#include <iostream>
#include "Complex.hpp"
#include "Template.hpp"

using namespace std;
using namespace iozocpp;


template <class T>
void print(T arg)
{
    cout << arg << endl;
}

void test(){
    cout << "hello from test" << endl;
}

void test2(){
    cout << "hello from test2" << endl;
}

void test3(int value){
    cout << "hello from test3, value = " << value << endl;
}

int main()
{
    Complex c1(1,4);
    Complex c2 (4,6);
    cout << c1 << " " << c2 << endl;
    
    cout << 7+c1+8.5+c2 << c1+5 << endl;
    
    (c1==c2) ? cout << "les nombres sont identiques" << endl:cout << "les nombres sont différents"<<endl;
    Complex c3 = c2;
    (c2==c3) ? cout << "les nombres sont identiques" << endl:cout << "les nombres sont différents"<<endl;

    (c1!=c2) ? cout << "les nombres sont différents" << endl:cout << "les nombres sont identiques"<<endl;
    Complex c4 = c2;
    (c2!=c3) ? cout << "les nombres sont différents" << endl:cout << "les nombres sont identiques"<<endl;

    cout << c1 << " " << *c1 << endl;
    
    Test<string> testStr("hello");
    testStr.print();
    
    print<int>(3);
    print<string>("hello");
    
    void (* pTest)() = test;
    pTest();
    
    pTest = test2;
    pTest();
    
    void (* pTest2)(int) = test3;
    pTest2(5);
    
    return 0;
}

