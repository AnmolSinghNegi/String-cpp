class Solution {
public:
    bool checkIfPangram(string sentence) {
        int hash[26]={0};
        for(auto it:sentence){
            int index =it-'a';
            hash[index]=1;
        }
        for(int i=0;i<26;i++){
            if(hash[i]==0){
                return false;
            }
        }
        return true;
    }
};