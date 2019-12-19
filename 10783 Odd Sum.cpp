//
//  main.cpp
//  10783 Odd Sum
//
//  Created by Joe on 2019/10/26.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int test_number, a, b;
    
    cin >> test_number;
    
    for(int i = 1; i <= test_number ; i++){
        cin >> a >> b;
        int total = 0;
        
        if(a % 2 == 0)
            a += 1;
            
        for(int j = a; j <= b; j += 2)
            total += j;
        
        cout << "Case "<< i << ": " <<total << endl;
            
    }
    return 0;
}
