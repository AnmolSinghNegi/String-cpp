#include <iostream>
using namespace std;
int main(){
  string s="naman";
  int i=0,j=s.size()-1;
  while(i<=j){
    if(s[i]!=s[j]){
      cout<<"Its not a palindrome";
      return -1;
    }
    i++;
    j--;
  }
  cout<<"Its a palindrome"<<endl;
  return 0;
}