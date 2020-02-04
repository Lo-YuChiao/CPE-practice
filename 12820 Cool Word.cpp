//
//  main.cpp
//  12820 Cool Word
//
//  Created by Joe on 2020/2/3.
//  Copyright © 2020 Joe. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    int test_number,casenum = 1;
    string input;
    while(cin >> test_number){
        int cool_word = 0;
        while(test_number--){
            vector<char> alphabet;
            vector<int> number_of_alphabet;
            cin >> input;
            
            for(int i = 0; i < input.size(); i++){
                vector<char>::iterator it = find(alphabet.begin(), alphabet.end(), input[i]);
                auto index = distance(alphabet.begin(), it);
                
                if (it == alphabet.end()){
                    alphabet.push_back(input[i]);
                    number_of_alphabet.push_back(1);
                }
                else
                    number_of_alphabet[index]++;
            }
            
            int flag = 0;
            for(int i = 0; i < number_of_alphabet.size(); i++){
                for(int j = i+1; j < number_of_alphabet.size(); j++){
                    if(number_of_alphabet[i] == number_of_alphabet[j]){
                        flag = 1;
                        break;
                    }
                }
                if(flag == 1) break;
            }
            if(alphabet.size() == 1) flag = 1;
            if(flag == 0) cool_word++;
        }
        cout << "Case " << casenum << ": " << cool_word << endl;
        casenum++;
    }
    return 0;
}
