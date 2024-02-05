class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mpp;
        mpp['I']=1;
        mpp['V']=5;
        mpp['X']=10;
        mpp['L']=50;
        mpp['C']=100;
        mpp['D']=500;
        mpp['M']=1000;
        int sum =0,index=0;
        while(index<s.size()-1){
            if(mpp[s[index]]<mpp[s[index+1]]){
                sum-=mpp[s[index]];
            }
            else{
                sum+=mpp[s[index]];
            }
            index++;
        }
        sum += mpp[s.back()];
        return sum;
    }
};