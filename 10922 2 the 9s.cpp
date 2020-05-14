//
//  main.cpp
//  10922 2 the 9s
//
//  Created by Joe on 2020/5/14.
//  Copyright © 2020 Joe. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
int degree = 1;

int check(string input){
    int total = 0;
    int len = input.size();
    
    for(int i = 0; i < len; i++) total += input[i] - 48;
    string total_str = to_string(total);  // "to_string" only c++11 can use
    
    if(total > 9) {
        degree++;
        return check(total_str);
    }
    return total;
}

int main(int argc, const char * argv[]) {
    string input;
    int total;
    while (cin >> input && input != "0") {
        total = check(input);
        if(total == 9)
            cout << input <<" is a multiple of 9 and has 9-degree " << degree  << "." << endl;
        else
            cout << input << " is not a multiple of 9." << endl;
        degree = 1;
    }
    return 0;
}
