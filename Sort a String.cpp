//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string sort(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << sort(s) << endl;
    }
return 0;
}
string sort(string s){
    int hash[26]={0};
    for(auto ch:s){
        hash[ch-'a']++;
    }
    string ans="";
    for(int i=0;i<26;i++){
        while(hash[i]--){
            ans+='a'+i;
        }
    }
    return ans;
}