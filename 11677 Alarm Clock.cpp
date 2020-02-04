//
//  main.cpp
//  11677 Alarm Clock
//
//  Created by Joe on 2020/2/3.
//  Copyright © 2020 Joe. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int H1, H2, M1, M2;
    while(cin >> H1 >> M1 >> H2 >> M2){
        
        if(H1 == 0 && H2 ==0 && M1 == 0 && M2==0)
            break;
        else{
            if(H1 == 0)
                H1 = 24;
            
            if(H2 == 0)
                H2 = 24;
            
            if(H1 > H2)
                H2 += 24;
            
            if(H1 == H2 && M1 > M2)
                H2 += 24;
            
            cout << (H2*60 + M2) - (H1*60 + M1) << endl;
        }
    }
    return 0;
}
