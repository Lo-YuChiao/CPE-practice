//
//  main.cpp
//  10633 Rare Easy Problem
//
//  Created by Joe on 2019/9/27.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    long long int N_sub_M;
    
    while(cin >> N_sub_M){
        if(N_sub_M == 0)
            break;
        
        else{
            int num = 0;
            for(int i=9; i >= 0; i--){
                if(num >= 1 && (N_sub_M - i) % 9 == 0)
                    cout << " ";
                
                if((N_sub_M - i) % 9 == 0){
                    cout << (N_sub_M - i)/9 * 10 + i ;
                    num++;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
