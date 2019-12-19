//
//  main.cpp
//  Hello World!
//
//  Created by Joe on 2019/9/10.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>
#include <math.h>

int main(int argc, const char * argv[]) {
    using namespace std;
    int line_number, i=0;
    
    while(cin >> line_number){
        
        if (line_number < 0){
            break;
        }
        
        else{
            int ans = 0;
            int power = 0;
            while(line_number > ans){
                ans = pow(2,power);
                power++;
            }
            
            i++;
            cout << "Case " << i << ": " << power-1 << endl;
        }
        
    }
    return 0;
}
