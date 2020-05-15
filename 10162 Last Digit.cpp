//
//  main.cpp
//  10162 Last Digit
//
//  Created by Joe on 2020/5/15.
//  Copyright © 2020 Joe. All rights reserved.
//
//  每100個數字1循環, 其中每增加20個其數字增加4倍%10

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int digit[20] = {0,1,5,2,8,3,9,2,8,7,7,8,4,7,3,8,4,1,5,4};
    string input;
    int mod;
    while(cin >> input && input != "0"){
        int len = input.size();
        if(len > 1) mod = (input[len-2]-'0')*10 + (input[len-1]-'0');
        else mod = input[len - 1] - '0';
        cout << (digit[mod % 20] + 4*(mod/20))%10 << endl;
    }
    
    return 0;
}
