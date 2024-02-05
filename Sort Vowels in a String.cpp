class Solution {
public:
    string sortVowels(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        string vowels;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                lower[s[i]-'a']++;
                s[i]='#';
            }
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                upper[s[i]-'A']++;
                s[i]='#';
            }
        }
        for(int i=0;i<26;i++){
            char ch='A'+i;
            while(upper[i]--){
                vowels+=ch;
            }
        }
        for(int i=0;i<26;i++){
            char ch='a'+i;
            while(lower[i]--){
                vowels+=ch;
            }
        }
        int j=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
                s[i]=vowels[j++];
            }
        }
        return s;
    }
};