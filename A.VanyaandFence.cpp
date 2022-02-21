//A. Vanya and Fence
#include <bits/stdc++.h>
using namespace std;
int main(){
    //input
    int n,h;
    cin >> n >> h;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    // solve
    int answer=0;
    for(int i=0;i<n;i++){
        if(a[i]>h){
            answer+=2;
        }
        else{
            answer+=1;
        }
    }
    cout << answer;
    return 0;
}
