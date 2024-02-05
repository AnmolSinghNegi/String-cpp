class Solution
{
    public:
    string caseSort(string s, int n)
    {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        for(int i=0;i<n;i++){
            if(s[i]>='a'&&s[i]<='z'){
                lower[s[i]-'a']++;
                s[i]='#';
            }
            if(s[i]>='A'&&s[i]<='Z'){
                upper[s[i]-'A']++;
                s[i]='*';
            }
        }
        string low;
        for(int i=0;i<26;i++){
            char ch='a'+i;
            while(lower[i]--){
                low+=ch;
            }
        }
        string up;
        for(int i=0;i<26;i++){
            char ch='A'+i;
            while(upper[i]--){
                up+=ch;
            }
        }
        int i=0,j=0;
        for(int k=0;k<n;k++){
            if(s[k]=='#'){
                s[k]=low[i++];
            }
            if(s[k]=='*'){
                s[k]=up[j++];
            }
        }
        return s;
    }
};