// A. Wrong Substraction
#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int n,k,i=0;
    cin >> n >> k;
    while(k){
        if(n%10 == 0){
            n = n/10;
        }else{
            --n;
        }
        k--;
    }
    cout << n ;
    return 0;
}