/*
 *		Author	: AdonNeet
 *		Date	: 2023-07-11 13:22:28.000-05:00
*/
 
#pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma") // if the judge machine use intel
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <cmath>

using namespace std;
typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    fast_cin();
    int n; cin >> n;
    ll count = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sqrt(i); j++){
            if(i%j == 0){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}