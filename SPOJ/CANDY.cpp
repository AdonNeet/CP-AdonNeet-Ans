/*
 *		Author	: AdonNeet
 *		Date	: 2023-07-11 16:33:36.000-05:00
*/
 
#pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma") // if the judge machine use intel
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  

 
using namespace std; 
typedef long long ll;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

 

int main()
{
    fast_cin();
    int n, res; ll sum; 

    while(cin >> n){
        if(n == -1) break;
        sum = 0; res = 0;
        ll temp[n];

        forn(i, n){
            cin >> temp[i];
            sum += temp[i];
        }

        if(sum%n != 0){
            cout << -1 << endl;
        }else {
            int each = sum/n;
            forn(i, n){
                if(temp[i] < each){
                    res += each - temp[i];
                }
            }
            cout << res << endl;
        }
    }
}