//
//  main.cpp
//  TestCpp
//
//  Created by Dominique Pavlin on 05/02/2020.
//  Copyright © 2020 Dominique Pavlin. All rights reserved.
//

#include <iostream>
#include <stack>
#include <queue>

using namespace std;


class Test
{
    string name;
    
    public:
    
    Test(string name):name(name)
    {
    }
    
    ~Test()
    {
        //cout << "Object destroyed" << endl;
    }
    
    void print() const
    {
        cout << name << endl;
    }
 };

int main() {

    stack<Test> testStack;
    
    testStack.push(Test("Mike"));
    testStack.push(Test("Joe"));
    testStack.push(Test("Sue"));
    testStack.push(Test("Bob"));
    
    while(testStack.size() > 0)
    {
        Test &test = testStack.top();
        test.print();
        testStack.pop();
    }
    
    
    queue<Test> testQueue;
    
    testQueue.push(Test("Mike"));
    testQueue.push(Test("Joe"));
    testQueue.push(Test("Sue"));
    testQueue.push(Test("Bob"));
    
    while(testQueue.size() > 0)
    {
        Test &test = testQueue.front();
        test.print();
        testQueue.pop();
    }

    return 0;
}
