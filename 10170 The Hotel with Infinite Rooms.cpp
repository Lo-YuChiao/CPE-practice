//
//  main.cpp
//  10170 The Hotel with Infinite Rooms
//
//  Created by Joe on 2019/10/26.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    long int number_of_people, day;
    
    while(cin >> number_of_people >> day){
        long int totalday = 0;
        
        while(totalday < day)
            totalday += number_of_people++;
        
        cout << number_of_people-1 << endl;
    }
    return 0;
}
