//
//  main.cpp
//  TestCpp
//
//  Created by Dominique Pavlin on 05/02/2020.
//  Copyright © 2020 Dominique Pavlin. All rights reserved.
//

#include <iostream>
#include <set>

using namespace std;


class Test
{
    int id;
    string name;
    
    public:
    Test():id(0),name("")
    {
    }
    
    Test(int id, string name):id(id),name(name)
    {
    }
                                 
    void Print() const
    {
        cout << id << ": " << name << endl;
    }
    
    bool operator<(const Test &other) const {
        return name < other.name;
    }
 };

int main() {

    set<int> numbers;
    
    numbers.insert(20);
    numbers.insert(50);
    numbers.insert(80);
    numbers.insert(75);
    
    
    for(set<int>::iterator it=numbers.begin();it!=numbers.end();it++)
    {
        cout << *it << endl;
    }
    
    set<int>::iterator itFind = numbers.find(120);
    
    if(itFind != numbers.end())
    {
        cout << "120 found in set" << endl;
    }
    else
    {
        cout << "120 not found in set" << endl;
    }
    
    
    set<Test> test;
    
    Test t1(10,"Mike");
    Test t2(30,"Joe");
    Test t3(20,"Sue");
    Test t4(50,"Joe");
    
    
    test.insert(t1);
    test.insert(t2);
    test.insert(t3);
    test.insert(t4);
    
    for(set<Test>::iterator it=test.begin();it!=test.end();it++)
    {
        it->Print();
    }
    
    return 0;
}
