//
//  main.cpp
//  151 Power Crisis
//
//  Created by Joe on 2019/11/22.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int N;
    while(cin >> N){
        if(N != 0){
            for (int i = 1; i < N; i++){
                int k = 0;
                
                for(int j = 1; j < N; j++)
                    k = (k+i)%j;
                
                if(k == 11){
                    cout << i << endl;
                    break;
                }
            }
        }
        
        else
            break;
    }
    return 0;
}
