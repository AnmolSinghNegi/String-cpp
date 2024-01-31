#include <iostream>
using namespace std;
int main(){
  //Declaration
  string s;
  //Intialization
  string str="Anmol";
  cout<<str<<endl;
  //Combining two strings
  string str2="Negi";
  string s3= str+str2;
  cout<<s3<<endl;
  //another way;
  str=str.append(str2);
  cout<<str<<endl;
  //Add a character at last;
  str.push_back('6');
  cout<<str<<endl;
  //pop last character
  str.pop_back();
  cout<<str<<endl;
  return 0;
}