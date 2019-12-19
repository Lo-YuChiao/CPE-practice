//
//  main.cpp
//  2015-02:Recursion and Mod
//
//  Created by Joe on 2019/12/3.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>
#include <math.h>

long long cal(int a,long long n,long long b)
{
    if(n==1)
        return 3;
    else
    {
        long long result=cal(a,n/2,b);
        
        if(n%2==1)
            return ((result*result*3))%b;
        else
            return ((result*result))%b;
    }
}

int main(int argc, const char * argv[]) {
    using namespace std;
    
    long long n;
    
    while(cin >> n){
        n=cal(3,n,1000000009);
        cout << n-2 << endl;
    }
    return 0;
}
