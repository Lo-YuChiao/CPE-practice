//
//  main.cpp
//  10222 Decode the Mad man
//
//  Created by Joe on 2019/10/24.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    char word;
    char dictionary[] = {'`','1','2','3','4','5','6','7','8','9','0','-','=',
                         'q','w','e','r','t','y','u','i','o','p','[',']','\\',
                         'a','s','d','f','g','h','j','k','l',';','\'',
                         'z','x','c','v','b','n','m',',','.','/' };
    
    while(cin.get(word)){
            if(word == ' ')
                cout << " ";
            if(word == '\n')
                cout << endl;
            else{
                for(int j = 0; j < 47; j++){
                    if(word == dictionary[j])
                        cout << dictionary[j-2];
                }
            }
        }
    
    return 0;
}
