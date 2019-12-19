//
//  main.cpp
//  913 Joana and the Odd Numbers
//
//  Created by Joe on 2019/9/24.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    long long int input;
    while(cin >> input){
        cout << (input * ((input+1)/2) + ((input+1)/2) - 3) * 3 << endl;
    }
    return 0;
}
