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

class Person{

    private:
    string name;
    int age;
    
    public:
    Person():name(""), age(0)
    {
        
    }
    
    Person(const Person &other){
        cout << "Copy constructor invoked" << endl;
        name = other.name;
        age = other.age;
    }
    
    Person(string name,int age):name(name),age(age)
    {
        
    }
    
    void print(){
        cout << name << ": " << age << endl;
    }
};


int main() {

    map<int,Person> people;
    
    people[0] = Person("Mike",40);
    people[1] = Person("Vicky",28);
    people[2] = Person("Raj",31);
    
    people.insert(make_pair(55,Person("Bob",45)));
    people.insert(make_pair(7,Person("Sue",52)));
    
    for(map<int,Person>::iterator it=people.begin();it!=people.end();it++)
    {
        cout << it->first << ": " << flush;
        it->second.print();
    }
    
    return 0;
}
