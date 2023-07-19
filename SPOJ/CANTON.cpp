/*
 *		Author	: AdonNeet
 *		Date	: 2023-07-11 14:56:21.000-05:00
*/
 
#pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma") // if the judge machine use intel
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

void georgeCantor(int n) // in there we will not make a array of num
{    
    int i = 1; // let i = numerator
    int j = 1; // let j = denominator
    int k = 1; // to keep the check of no. of terms
         
    // loop till k is not equal to n
    while (k < n)
    {
        j++ , k++;
         
        // check if k is already equal to N
        // then the first term is the required
        // rational number
        if (k == n)
            break;
         
        // loop for traversing from right to left
        // downwards diagonally
        while (j > 1 && k < n) {
            i++, j--, k++;
        }
         
        if (k == n)
           break;
         
        i++, k++;
         
        if (k == n)
           break;
         
        // loop for traversing from left
        // to right upwards diagonally
        while (i > 1 && k < n) {
            i--, j++, k++;
        }       
    }   
    cout << "TERM " << n << " IS " << i << "/" << j << endl;
}
 
// main act
int main()
{
    fast_cin();
    int n, t; cin >> t; 
    while(t--){
        cin >> n;
        georgeCantor(n);
    }    
    return 0;
}