/*
 *		Author	: AdonNeet
 *		Date	: 2023-07-11 14:10:53.000-05:00
*/
 
#pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma") // if the judge machine use intel
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
 
using namespace std;
typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

ll dp[1000005];

void solve(){
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	for(int i = 3; i < 1000005; i++){
		dp[i] = max((ll)i, dp[(int)i/2]+dp[(int)i/3]+dp[(int)i/4]);
	}
}

ll recurse(int n){
	if(n <= 1000000)
		return dp[n];
	return recurse(n/2)+recurse(n/3)+recurse(n/4);
}

int main()
{
    fast_cin();
	solve();
	int n; 
    while(cin >> n){
    	if(n <= 1000000){
    		cout<<dp[n]<<endl;
    	}else{
    		cout<<recurse(n)<<endl;
    	}
    }
    return 0;
}