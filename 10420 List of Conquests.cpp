//
//  main.cpp
//  10420 List of Conquests
//
//  Created by Joe on 2019/10/24.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <map>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    map<string, int> statistics;
    int number_of_line;
    string country, name;
    
    cin >> number_of_line;
    
    while(number_of_line--){
        cin >> country;
        getline(cin, name);
        statistics[country]++;
    }
    
    for (auto const &item : statistics)
        cout << item.first << " " << item.second << endl;
    
    return 0;
}
