//
//  main.cpp
//  TestCpp
//
//  Created by Dominique Pavlin on 05/02/2020.
//  Copyright © 2020 Dominique Pavlin. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string>strings;
 
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    
    cout << strings[2] << endl;
    cout << strings.size() << endl;
    
    for(int i=0;i<strings.size();i++)
    {
        cout << strings[i] << endl;
    }
    cout << endl;
    for(vector<string>::iterator it = strings.begin();it != strings.end();it++)
    {
     cout << *it << endl;
    }
    
    cout << endl;
    vector<int>entiers;
    
    entiers.push_back(10);
    entiers.push_back(20);
    entiers.push_back(50);
    entiers.push_back(7);
    entiers.push_back(8);
    entiers.push_back(854);
    
    for(vector<int>::iterator it=entiers.begin();it!=entiers.end();it++)
    {
        cout << *it << endl;
    }
    
    return 0;
}
