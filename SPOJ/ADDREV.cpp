/*
 *		Author	: AdonNeet
 *		Date	: 2023-07-09 13:35:15.000-05:00
*/
 
#pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma") // if the judge machine use intel
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

 
int balik(int n){
	int rest = 0;
	while(n){
		rest = rest*10+(n%10);
		n/=10;
	}
	return rest;
}

int main()
{
    fast_cin();
    int t;
	cin>>t;
	while(t--){
		int a, b;
		cin>>a>>b;
		int rev_a = balik(a);
		int rev_b = balik(b);
		int ans = rev_a+rev_b;
		cout<<balik(ans)<<endl;
	}
	return 0;
}