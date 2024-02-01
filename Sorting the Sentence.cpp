class Solution {
public:
    string sortSentence(string s) {
        vector<string>vec(10);
        string temp;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                int pos=temp[temp.size()-1]-'0';
                temp.pop_back();
                vec[pos]=temp;
                temp.clear();
                count++;
            }
            else{
                temp+=s[i];
            }
        }
        int pos=temp[temp.size()-1]-'0';
        temp.pop_back();
        vec[pos]=temp;
        temp.clear();
        count++;  
    for(int i=1;i<count;i++){
        temp+=vec[i];
        temp+=" ";
    }
    temp+=vec[count];
    return temp;
    }
};