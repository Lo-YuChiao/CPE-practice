//
//  main.cpp
//  272 : TEX Quotes
//
//  Created by Joe on 2020/3/30.
//  Copyright © 2020 Joe. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char word;
    int count = 0;
    while((word = getchar()) != EOF){
        if(word == '"'){
            count++;
            if(count % 2 == 1)
                cout << "``" ;
            else
                cout << "''" ;
        }
        else
            cout << word;
    }
    return 0;
}
