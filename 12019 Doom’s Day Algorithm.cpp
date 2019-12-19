//
//  main.cpp
//  12019 Doom’s Day Algorithm
//
//  Created by Joe on 2019/10/25.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int day_of_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string day_of_week[7] = {"Friday", "Saturday" , "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    int test_number, month, day;
    cin >> test_number;
    
    while(test_number--){
        cin >> month >> day;
        int total_of_day = 0;
        
        for(int i = 0; i < month-1; i++){
            total_of_day += day_of_month[i];
        }
        total_of_day += day;
        
        cout << day_of_week[total_of_day % 7] << endl;
    }
    
    return 0;
}
