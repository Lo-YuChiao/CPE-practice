//
//  main.cpp
//  10812 Beat the Spread!
//
//  Created by Joe on 2019/10/26.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    long int test_number, s, d;
    
    cin >> test_number;
    while(test_number--){
        cin >> s >> d;
        
        if((s+d) % 2 != 0 || (s-d) % 2 != 0)
            cout << "impossible" << endl;
        
        else if ((s+d) < 0 || (s-d) < 0)
            cout << "impossible" << endl;
        
        else
            cout << (s+d)/2 << " " << (s-d)/2 << endl;
        
    }
    return 0;
}
