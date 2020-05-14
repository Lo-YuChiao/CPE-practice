//
//  main.cpp
//  11321 Sort! Sort!! and Sort!!!
//
//  Created by Joe on 2020/5/14.
//  Copyright © 2020 Joe. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

struct num{
    int n;      // number itself
    int r;      // remainder
    int odd;   // 0: even, 1: odd
}number[10000];

bool compare(num a , num b){
    if(a.r != b.r) return a.r < b.r;                // small remainder first
    else if(a.odd + b.odd == 1) return a.odd;       // one odd one even
    else if (a.odd + b.odd == 0) return a.n < b.n;  // two even
    else return a.n > b.n;                          // two odd
}

int main(int argc, const char * argv[]) {
    int N, M;
    while(cin >> N >> M && (N != 0 && M != 0)){
        int input;
        for(int i = 0; i < N; i++){
            cin >> input;
            number[i].n = input;
            number[i].r = input % M;
            number[i].odd = abs(input % 2);
        }
        
        sort(number, number+N, compare);
        
        cout << N << " " << M << endl;
        for(int i = 0; i < N; i++) cout << number[i].n << endl;
    }
    cout << "0 0" << endl;
    return 0;
}
