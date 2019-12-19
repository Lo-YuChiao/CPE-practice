//
//  main.cpp
//  10405 Longest Common Subsequence
//
//  Created by Joe on 2019/12/18.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    string s1, s2;
    int LCS[1005][1005] = {0};
    
    while(getline(cin, s1)){
        getline(cin, s2);
        
        int lenS1 = s1.size();
        int lenS2 = s2.size();
        
        for(int i = 1; i <= lenS1; i++){
            for(int j = 1; j <= lenS2 ; j++){
                if(s1[i-1] == s2[j-1])
                    LCS[i][j] = LCS[i-1][j-1]+1;
                else
                    LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
            }
        }
        cout << LCS[lenS1][lenS2] << endl;
    }
    return 0;
}
