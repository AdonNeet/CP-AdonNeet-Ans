/*
 *		Author	: AdonNeet
 *		Date	: 2023-07-10 00:05:39.000-05:00
*/
 
#pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma") // if the judge machine use intel
#include <bits/stdc++.h>  

 
using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("../input.in", "r", stdin);
    freopen("../output.out", "w", stdout);
    #endif

    fast_cin();
    string s, t, nd;
    cin >> s >> t;
    nd = s + t;

    if(s == t){
        cout << s;
    }else {
        cout << nd;
    }
}