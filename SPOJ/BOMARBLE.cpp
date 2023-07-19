/*
 *		Author	: AdonNeet
 *		Date	: 2023-07-11 14:17:27.000-05:00
*/
 
#pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma") // if the judge machine use intel
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  

using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int ar[1005];
int lastIdx = 1;

int findAns(int n){
    if(ar[n] < 1){
        for(lastIdx;lastIdx<n;lastIdx++) {
            ar[lastIdx+1] = ((lastIdx+2)*3 - 2) + ar[lastIdx];
        }
        return ar[n];
    }else {
        return ar[n];
    }
}

int main()
{
    ar[1] = 5;

    fast_cin();
    int n;
    while(cin >> n) {
        if(n == 0) break;
        cout<<findAns(n)<<endl;
    }
}