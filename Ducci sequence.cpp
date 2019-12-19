//
//  main.cpp
//  Ducci sequence
//
//  Created by Joe on 2019/9/9.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    int test_number, tuple, time, total;
    
    cin >> test_number;
    
    for(int i = 0 ; i < test_number ; i++){
        total = 0;
        time = 0;
        
        cin >> tuple;
        int number[tuple];
        int ans[tuple];
        
        for(int j = 0 ; j < tuple ; j++){
            cin >> number[j];
            total = total + number[j];
        }
        
        if(total == 0)
            cout << "ZERO" << endl;
        
        else{
            while(time <=1000){
                total = 0;
                for(int j = 0 ; j < tuple ; j++){
                    ans[j] = abs(number[j] - number[j+1]);
            
                    if(j == tuple-1){
                        ans[j] = abs(number[j] - number[0]);
                    }
                    
                    total = total + ans[j] ;
                }
            
                for(int j = 0 ; j < tuple ; j++){
                    number[j] = ans[j];
                }
            
                if(total == 0)
                    break;
                
                time++;
            }
        
            if(total == 0)
                cout << "ZERO" << endl;
        
            else
                cout << "LOOP" << endl;
        }
    }
    

    return 0;
}
