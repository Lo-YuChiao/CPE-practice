//
//  main.cpp
//  10295 Hay Points
//
//  Created by Joe on 2019/12/19.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int m, n;
    int salary;
    string word;
    
    cin >> m >> n;
    
    string Word[m];
    int Salary[m];
    int number_of_word[m];
    
    for(int i = 0; i < m ; i++){
        number_of_word[i] = 0;
    }

    for(int i = 0; i < m ; i++){
        cin >> word >> salary;
        Word[i] = word;
        Salary[i] = salary;
    }
    
    string line;
    while(n != 0){
        cin >> line;
        
        for(int i = 0; i < m; i++){
            if(line == Word[i])
                number_of_word[i]++;
        }
        
        if(line == "."){
            int HayPoint = 0;
            for(int i = 0; i < m ; i++){
                HayPoint += number_of_word[i] * Salary[i];
            }
            cout << HayPoint << endl;
            
            for(int i = 0; i < m ; i++){
                number_of_word[i] = 0;
            }
            n--;
        }
    }
    
    
    return 0;
}
