//
//  main.cpp
//  11067:Cola
//
//  Created by Joe on 2019/12/3.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int bottle;
    
    while (cin >> bottle) {
        int sum = bottle;
        while(bottle >= 3){
            sum += bottle/3;
            bottle = bottle/3 + bottle%3;
        }
        if(bottle == 2)
            sum++;
        cout << sum << endl;
    }
    return 0;
}
