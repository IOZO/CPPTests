//
//  main.cpp
//  TestCpp
//
//  Created by Dominique Pavlin on 05/02/2020.
//  Copyright © 2020 Dominique Pavlin. All rights reserved.
//

#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string,int> ages;
    
    ages["Mike"] = 40;
    ages["Raj"] = 20;
    ages["Vicky"] = 30;

    pair<string,int> addToMap("Peter",100);
    ages.insert(addToMap);
    
    ages["Mike"] = 85;
    
    cout << ages["Raj"] << endl;
    if(ages.find("Vicky") != ages.end())
    {
        cout << "Found Vicky" << endl;
    }
    else
    {
        cout << "Key not found"<<endl;
    }
    
    for(map<string,int>::iterator it=ages.begin();it != ages.end();it++)
       {
           pair<string,int> age = *it;
           cout << age.first<<": "<<age.second<<endl;
       }
    cout <<endl;
    for(map<string,int>::iterator it=ages.begin();it != ages.end();it++)
    {
        cout << it->first<<": "<<it->second<<endl;
    }
    
    return 0;
}
