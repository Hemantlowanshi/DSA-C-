#include<iostream>
using namespace std;
int main(){

string s = "abcabcbb";
string t ="";

  int count =0;
for(int i=0;i<s.size();i++){
for(int j=i;j<s.size();j++){
    if(s[i]!=s[j]){
     count;
    }
    else break;
    count = max(count,t);
}
}
cout<<countr;
}
