//
//  main.cpp
//  11417 GCD
//
//  Created by Joe on 2020/2/3.
//  Copyright © 2020 Joe. All rights reserved.
//

#include <iostream>
using namespace std;

int GCD(int i, int j){
    int t = 1;
    while(t != 0){
        t = i%j;
        i = j;
        j = t;
    }
    return i;
}

int main(int argc, const char * argv[]) {
    int N;
    while(cin >> N && N !=0){
        int G = 0;
        for(int i=1;i<N;i++){
            for(int j=i+1;j<=N;j++)
                G += GCD(i,j);
            }
        cout << G << endl;
        }
    return 0;
}
