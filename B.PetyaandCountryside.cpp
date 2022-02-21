//B. Petya and Countryside
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin >> n;
    vector<int> h(n);
    vector<int> flows(n);
    for(int i=0;i<n;i++)  flows[i]=1;
    for(int i=0;i<n;i++) cin >> h[i];
    cout << "\n";
    
    for(int i=0;i<n;i++){
        if(i==0){
            int j = 0;
            while(h[j]>=h[j+1] && j<n-1){
                flows[i]++;
                j++;
            }
        }
        if(i==n-1){
            int j = n-1;
            while(h[j]>=h[j-1] && j>0){
                flows[i]++;
                j--;
            }
        } 
    }

    for(int i=1;i<n-1;i++){
        // moves to the right
        int j=i;
        while(h[j]>=h[j+1] && j<=n-2){
            flows[i]++;
            j++;
        }          
        // moves to the left
        j=i;
        while(h[j]>=h[j-1] && j>=1 ){
            flows[i]++;
            j--;
        }
    }
    //for(int i=0; i<n;i++) cout << flows[i] <<" ";
    cout << *max_element(flows.begin(),flows.end());
    return 0;
}
