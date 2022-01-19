//4A. Watermelon
#include <bits/stdc++.h>
using namespace std;
int main(){
    // Introduce the watermelon weight
    int w;
    cin >> w ;
    if (w % 2 == 0){
        if (w == 2){
            cout << "NO";
        } else{
        cout << "YES";
        }
    } else{
        cout << "NO";
    }
    return 0;
}
