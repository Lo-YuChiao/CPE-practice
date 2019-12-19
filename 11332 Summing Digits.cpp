//
//  main.cpp
//  11332 Summing Digits
//
//  Created by Joe on 2019/10/24.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>

int f (int n){
    int ans = 0;
    
    while(n/10 != 0){
        ans = ans + n % 10;
        n = n / 10;
    }
    ans += n;
    
    return ans;
}

int main(int argc, const char * argv[]) {
    using namespace std;
    int number;
    while(cin >> number && number != 0){
       
        while(number > 9)
            number = f(number);
        
        cout << number << endl;
    }
    
    return 0;
}
