// A. Beautiful Matrix
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5,m=5, x_coordinate, y_coordinate;
    //cin >> n >> m;
    int matrix[n][m];
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                // store de coordinate
                x_coordinate = i;
                y_coordinate = j;
            }
        }
    }
    cout << abs(x_coordinate-2)+abs(y_coordinate-2);
    
    return 0;
}