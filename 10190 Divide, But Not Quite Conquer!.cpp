//
//  main.cpp
//  10190 Divide, But Not Quite Conquer!
//
//  Created by Joe on 2020/1/28.
//  Copyright © 2020 Joe. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int m,n;
    
    while(cin >> m >> n){
        int divisible = 1;
        vector<int> arr;
        
        while(m != 1){
            arr.push_back(m);
            
            if(m % n != 0){
                divisible = 0;
                break;
            }
            m /= n;
        }
        
        if(divisible == 1){
            for(int i = 0; i < arr.size();i++)
                cout << arr[i] << " ";
            cout << "1" << endl;
        }
        else
            cout << "Boring!" << endl;
        
    }
    return 0;
}
