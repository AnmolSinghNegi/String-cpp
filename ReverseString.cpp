#include <iostream>
using namespace std;
int main(){
  string s="Hello";
  int i=0,j=s.size()-1;
  while(i<=j){
    swap(s[i],s[j]);
    i++;
    j--;
  }
  cout<<s<<endl;
  return 0;
}