//
//  main.cpp
//  10409 Die Game
//
//  Created by Joe on 2019/9/20.
//  Copyright © 2019 Joe. All rights reserved.

//  **注意：append的順序**

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int turn;
    string oriention;
    
    while(cin >> turn && turn != 0){
        int top = 1, north = 2, west = 3, east = 4, south = 5, bottom = 6;
        int tmp;
        
        for(int i = 0; i < turn ; i++){
            cin >> oriention;
            tmp = top;
            switch (oriention[0]){
                case 'n':
                    top = south;
                    south = bottom;
                    bottom = north;
                    north = tmp;
                    west = west;
                    east = east;
                    break;
                    
                case 'w':
                    top = east;
                    east = bottom;
                    bottom = west;
                    west = tmp;
                    north = north;
                    south = south;
                    break;
                    
                case 's':
                    top = north;
                    north = bottom;
                    bottom = south;
                    south = tmp;
                    west = west;
                    east = east;
                    break;
                
                case 'e':
                    top = west;
                    west = bottom;
                    bottom = east;
                    east = tmp;
                    north = north;
                    south = south;
                    break;
            }
        }
        cout << top << endl;
    }
    return 0;
}
