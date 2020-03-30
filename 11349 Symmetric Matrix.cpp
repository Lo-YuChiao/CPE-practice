//
//  main.cpp
//  11349 Symmetric Matrix
//
//  Created by Joe on 2020/3/30.
//  Copyright © 2020 Joe. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    int test_number, arraySize, N;
    char waste;
    cin >> test_number;
    
    for(int t = 1;t <= test_number; t++){
        bool flag = true;
        
        for(int i = 0; i < 4; i++)
            waste = getchar();
        
        cin >> N;
        arraySize = N*N /2 ;
        long long array1[arraySize+1], array2[arraySize+1] ;
        
        for(int i = 1; i <= arraySize; i++){
            cin >> array1[i];
            if(array1[i] < 0) flag = false;
        }
       
        
        if((N*N) % 2 == 1){
            for(int i = 0; i <= arraySize; i++){
                cin >> array2[i];
                if(array2[i] < 0) flag = false;
            }
        }
        else{
            for(int i = 1; i <= arraySize; i++){
                cin >> array2[i];
                if(array2[i] < 0) flag = false;
            }
        }
        
        int j = arraySize;
        for(int i = 1; i <= arraySize; i++){
            if(array1[i] != array2[j]){
                flag = false;
                break;
            }
            j--;
        }
        
        if(flag == false)
            cout << "Test #"<< t << ": " << "Non-symmetric." << endl;
        else
            cout << "Test #"<< t << ": " << "Symmetric." << endl;
    }
    return 0;
}
