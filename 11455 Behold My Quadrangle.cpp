//
//  main.cpp
//  11455 Behold My Quadrangle
//
//  Created by Joe on 2019/9/10.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>
#include <algorithm>

int main(int argc, const char * argv[]) {
    using namespace std;
    int test_number;
    
    cin >> test_number;
    
    for(int i = 0; i < test_number ; i++){
        int array[4];
        cin >> array[0] >> array[1] >> array[2] >> array[3];
        
        sort(array, array+4);
        
        if(array[0] == array[1] && array[1] == array[2] && array[2] == array[3]){
            cout << "square" << endl;
        }
     
        else if(array[0] == array[1] && array[2] == array[3]){
            cout << "rectangle" << endl;
        }
    
        else if (array[0] +array[1] +array[2] > array[3]){          //三短邊加起來必須大於第四邊，否則不為四邊形
            cout << "quadrangle" << endl;
        }
        
        else{
            cout << "banana" << endl;
        }
    }
    
    return 0;
}
