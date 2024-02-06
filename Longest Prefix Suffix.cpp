class Solution{
  public:		
	int lps(string s) {
    //KMP Algo
	   vector<int>lps(s.size());
	   int prefix=0,suffix=1;
	   while(suffix<s.size()){
	       if(s[prefix]==s[suffix]){
	           lps[suffix]=prefix+1;
	           prefix++,suffix++;
	       }
	       else{
	           if(prefix==0){
	               lps[suffix]=0;
	               suffix++;
	           }
	           else{
	               prefix=lps[prefix-1];
	           }
	       }
	   }
	   return lps[s.size()-1]
	}
};