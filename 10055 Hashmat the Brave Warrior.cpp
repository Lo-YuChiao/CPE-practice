//
//  main.cpp
//  10055 Hashmat the Brave Warrior
//
//  Created by Joe on 2019/9/14.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    long long int num1, num2;
    
    while(cin >> num1 >> num2){
        cout << abs(num1 - num2) << endl;
    }
    return 0;
}
