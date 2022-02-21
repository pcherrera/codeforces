#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,winners=0;
    cin >> n >> k ; 
    int list[n];
    for(int i = 0; i<n;i++){
        cin >> list[i];
    }
    for(int i = 0; i < n;i++){
        if(list[i] >= list[k-1] && list[i]!=0){
            winners++;
        }
    }
    cout << winners;
    return 0;
}
