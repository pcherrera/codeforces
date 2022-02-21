//231A A Team
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int nr_problems = 0;
    while(n){
        int a, b ,c;
        cin >> a >> b >> c;
        if (a+b+c > 1){
            nr_problems = nr_problems+1;
        }
        --n;
    } 
    cout << nr_problems;
    return 0;
}
