class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        int index=0;
        while(address[index]!='\0'){
            if(address[index]=='.'){
                ans+="[.]";
            }
            else{
                ans+=address[index];
            }
            index++;
        }
        return ans;
    }
};