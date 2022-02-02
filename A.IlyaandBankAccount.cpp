// A. Ilya and Bank Account
#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    cin >> n;
    // delete last digit
    int a = (abs(n)-abs(n)%10)/10;
    // delete digit befor last digit
    int b = (abs(n)-abs(n)%100)/10+abs(n)%10;
    if (n>=0){
        cout << max(max(a,b),n);
    }else{
        cout << max(max(-a,-b),n);
        //cout << a << "\n"<< b;
    }
    return 0;
}