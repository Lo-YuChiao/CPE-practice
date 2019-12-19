//
//  main.cpp
//  Root	Submit Problem Stats uDebug Download as PDF 10041 Vito's Family
//
//  Created by Joe on 2019/9/14.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>
#include <algorithm>

int main(int argc, const char * argv[]) {
    using namespace std;
    int test_number, relatives_number;
    cin >> test_number;
    
    while(test_number){
        cin >> relatives_number;
        int array_of_number[relatives_number];
        
        for(int i=0; i<relatives_number; i++){
            cin >> array_of_number[i];
        }
        sort(array_of_number, array_of_number+relatives_number);
        
        int sum=0;
        
        for(int i = (relatives_number/2)-1; i>=0; i--){
            sum += abs(array_of_number[relatives_number/2]-array_of_number[i]);
            }
        
        for(int i = (relatives_number/2)+1; i<relatives_number; i++){
            sum += abs(array_of_number[relatives_number/2]-array_of_number[i]);
            }
        
        cout << sum << endl;
        sum = 0;
        
        test_number--;
    }
    
    return 0;
}
