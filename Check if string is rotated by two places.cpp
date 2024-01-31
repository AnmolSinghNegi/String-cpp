#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    string rotateantiClockwise(string s){
        reverse(s.begin(),s.begin()+2);
        reverse(s.begin()+2,s.end());
        reverse(s.begin(),s.end());
        return s;
    }
    string rotateclockwise(string s){
        int n=s.size();
        reverse(s.begin()+n-2,s.end());
        reverse(s.begin(),s.end()-2);
        reverse(s.begin(),s.end());
        return s;
    }
    bool isRotated(string str1, string str2)
    {
        if(str1.length()<2){
            return false;
        }
        string anticlockwise=rotateantiClockwise(str1);
        if(anticlockwise==str2){
            return true;
        }
        if(rotateclockwise(str1)==str2){
            return true;
        }
        return false;
    }

};

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}