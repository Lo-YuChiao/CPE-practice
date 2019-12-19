//
//  main.cpp
//  10056 What is the Probability
//
//  Created by Joe on 2019/10/26.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

int main(int argc, const char * argv[]) {
    using namespace std;
    int test_number;
    double number_of_people, probability, who_win;
    
    cin >>test_number;
    while(test_number--){
        cin >> number_of_people >> probability >> who_win;
    
        if(probability == 0)
            cout << 0.0000 << endl;
        else
            cout << fixed <<setprecision(4) <<
            (probability * pow(1-probability, who_win - 1) ) / (1 - pow(1-probability,number_of_people)) << endl;
    }
    return 0;
}
