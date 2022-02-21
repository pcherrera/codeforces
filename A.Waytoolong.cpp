//71.A A way too long words
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n ;
    while(n){
        string word;
        cin >> word ;
        // obtain word size
        int lenght = word.length();
            if (lenght<11){
                cout << word << "\n";
            }else{
                cout << word[0]+to_string(lenght-2)+word[lenght-1] <<"\n";
            }
        n--;
    }

    return 0;
}
