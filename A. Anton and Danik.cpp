//A. Anton and Danik
#include <bits/stdc++.h>
using namespace std;
int main(){
    //input
    int n;
    cin >> n;
    vector <char> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    //solve
    int A=0,D=0;
    for(int i=0;i<n;i++){
        if(a[i]=='A'){
            A++;
        }else{
            D++;
        }
    }  
    string answer;
    if (A == D){
        answer = "Friendship";
    }
    else if(A > D){
        answer = "Anthon";
    
    }else{
        answer = "Danik";
    } 
    cout << answer;
    return 0;
}