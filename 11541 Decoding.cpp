//
//  main.cpp
//  11541 Decoding
//
//  Created by Joe on 2020/2/6.
//  Copyright © 2020 Joe. All rights reserved.
//

#include <iostream>

using namespace std;
 
int main()
{
    int test_number, number;
    char alphabet;
    
    while(cin >> test_number){
        getchar(); // get "\n" right after test number
        for(int i = 1; i <= test_number ; i++){
            cout << "Case "<< i <<": ";
            while((alphabet = getchar())!= '\n'){
                cin >> number;
                for(int i = 0; i< number; i++)
                    cout << alphabet;
            }
            cout << endl;
        }
    }
    return 0;
}
