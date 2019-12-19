//
//  main.cpp
//  10929 You can say 11
//
//  Created by Joe on 2019/9/12.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    using namespace std;
    string input;
    int odd = 0, even = 0 ;
    
    while(cin >> input){
        
        if(input == "0"){
            break;
        }
        
        
        else{
            odd = 0;
            even = 0;
            
            for(auto i = 0; i < input.size(); i++){
                if(i % 2 == 0){
                    odd = odd + (input[i]-48);
                }
                
                else{
                    even = even + (input[i]-48);
                }
            }
           
            if(abs(odd - even) % 11 == 0){
                cout << input << " is a multiple of 11." << endl;
            }
            
            else
                cout << input << " is not a multiple of 11." << endl;
        }
    }
    return 0;
}
