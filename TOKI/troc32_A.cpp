/*
 *		Author	: AdonNeet
 *		Date	: 2023-07-09 23:48:25.000-05:00
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
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    if(((n%a == 0) && (n%b != 0)) || n%c == 0){
        cout << "YES";
    }else {
        cout << "NO";
    }
    
}