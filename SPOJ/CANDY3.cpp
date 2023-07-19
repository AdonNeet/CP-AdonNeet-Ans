/*
 *		Author	: AdonNeet
 *		Date	: 2023-07-11 17:03:57.000-05:00
*/
 
#pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma") // if the judge machine use intel
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  

using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

 


int main()
{
    fast_cin();

    int t, N, i;
	long long int array[ 1000000 ], sum;
	scanf( "%d", &t );
	while ( t > 0 ) {
		scanf( "%d", &N );  // use scanf to get the integer, not the blank space
		for ( i = 0; i < N; ++i ) {
			scanf( "%lld", array + i );
		}
		sum = 0;
		for ( i = 0; i < N; ++i ) {
			sum = ( sum + array[ i ] ) % N;
		}
		if ( sum == 0 ) {
			printf( "YES\n" );
		}
		else {
			printf( "NO\n" );
		}

		t--;
	}
}