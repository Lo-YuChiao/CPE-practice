//
//  main.cpp
//  10057 A mid-summer night's dream
//
//  Created by Joe on 2020/1/15.
//  Copyright © 2020 Joe. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
   int n, mid;
    while(cin >> n){
        int arr[n];
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        sort(arr,arr+n);
        
        if(n%2 == 1){
             mid = arr[n/2];
             int numberOfMid = 0;
            
             for(int i = 0; i < n ; i++){
                if(arr[i] == mid)
                    numberOfMid++;
            }
            
            cout << mid << " " << numberOfMid << " " << "1" << endl;
        }
        
        else{
            mid = arr[n/2 - 1];
            int numberOfMid = 0;
            for(int i = 0; i < n ; i++){
                if(arr[i] == mid || arr[i] == arr[n/2])
                    numberOfMid++;
            }
            cout << mid << " " << numberOfMid << " " << (arr[n/2] - mid)+1 << endl;
        }
        
    }
    
    return 0;
}
