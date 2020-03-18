//
//  main.cpp
//  11321 Sort! Sort!! And Sort!!!
//
//  Created by Joe on 2019/9/15.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

struct num{
    int r; // remainder
    int n; // dividend
    int flag; // to judge if the remainder is odd or even
}number[10000];

bool compare(num A, num B){
    if(A.r != B.r)
        return A.r < B.r;
    
    else if (A.flag + B.flag == 1) // one odd, one even
        return A.flag;
    
    else if(A.flag + B.flag == 2) // both odd
        return A.n > B.n;
    
    return A.n < B.n; // both even
}

int main(int argc, const char * argv[]) {
    int N, M ;
    while(cin >> N >> M && (N != 0 && M != 0)){
        for(int i = 0; i < N ; i++){
            cin >> number[i].n;
            number[i].r = number[i].n % M;
            number[i].flag = abs(number[i].n % 2);
        }
        sort(number, number+N, compare);
        cout << N << " " << M << endl;
            
        for(int i = 0 ; i < N ; i++){
            cout << number[i].n << endl;
        }
    }
    cout <<"0 0"<< endl;
    return 0;
}
