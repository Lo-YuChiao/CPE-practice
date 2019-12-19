//
//  main.cpp
//  11475 Extend to Palindromes
//
//  Created by Joe on 2019/12/18.
//  Copyright © 2019 Joe. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

#define LEN 100000

int f[LEN+10];

void failure(char *P)
{
    int i, j;
    
    f[0] = -1;
    for(i = 1, j = -1; P[i]; i++)
    {
        while(j >= 0 && P[j+1] != P[i])
            j = f[j];
        
        if(P[j+1] == P[i])
            j++;
        
        f[i] = j;
    }
}

int KMP(char *S, char *P)
{
    int i, j;
    
    failure(P);
    
    for(i = 0, j = -1; S[i]; i++)
    {
        while(j >= 0 && P[j+1] != S[i])
            j = f[j];
        
        if(P[j+1] == S[i])
            j++;
        
    }
    
    return j;
}
int main(int argc, const char * argv[]) {
    char S[100001];
    char P[100001];
    int i, j;
    int len;
    int cut;
    
    while(scanf("%s", S) == 1)
    {
        len = strlen(S);
        
        for(i = 0, j = len - 1; i <= len - 1; i++, j--)
        {
            P[i] = S[j];
        }
        P[len] = '\0';
        
        cut = KMP(S, P);
        printf("%s", S);
        for(i = cut + 1; i <= len - 1; i++)
            printf("%c", P[i]);
        printf("\n");
    }
    
    return 0;
}
