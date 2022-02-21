// A. String Task
#include <bits/stdc++.h>
using namespace std; 

bool isvowel(char word){
    if (word == 'a' || word == 'e' || word == 'i' || word =='o' || word == 'u' 
    || word=='A' || word=='E' || word=='I' || word=='O'|| word=='U' ||word =='y' || word == 'Y'){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    string word, answer;
    cin >> word;
    n = word.length();   
    
    for(int i = 0; i<n;i++){
        word[i]=tolower(word[i]);
        if(isvowel(word[i])){
            continue;
        }else{
            answer +='.';
            answer +=word[i];
        }
        
    
    }
    cout << answer;
    return 0;
}
