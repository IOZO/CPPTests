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
    vector<vector<int>> grid(3,vector<int>(4,5));

    for(int row=0;row<grid.size();row++){
        for(int col=0;col<grid[row].size();col++){
            cout << grid[row][col] << flush;
        }
        cout << endl;
    }
    
    return 0;
}
