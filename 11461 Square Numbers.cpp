//
//  main.cpp
//  11461 Square Numbers
//
//  Created by Joe on 2020/3/31.
//  Copyright © 2020 Joe. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    int left, right;
    while(cin >> a >> b && (a!=0 && b!=0)){
        right = sqrt(b);
        left = sqrt(a);
        if(left*left < a) left++;
        
        cout << (right - left) + 1 << endl;
    }
    return 0;
}
