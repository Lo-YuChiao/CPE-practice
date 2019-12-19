//
//  main.cpp
//  10252 Common Permutation
//
//  Created by Joe on 2019/10/24.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>
#include <algorithm>

int main(int argc, const char * argv[]) {
    using namespace std;
    string a, b;
    
    while(getline(cin, a) && getline(cin, b)){
        
        if(a != " " && b != " "){
            string common_permutation = "";
        
            for(int i = 0; i < a.size(); i++){
                for(int j = 0; j < b.size(); j++){
                    if(a[i] == b[j] ){
                        b[j] = 'X';
                        common_permutation += a[i];
                        break;
                    }
                }
            }
            sort(common_permutation.begin(), common_permutation.end());
            cout << common_permutation << endl;
        }
        
        else
            cout << endl;
    }
    return 0;
}
