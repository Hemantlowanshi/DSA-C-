#include<iostream>
#include <unordered_map>
using namespace std;
int main(){
unordered_map<char,int> count;
string s = "aabbcc";

for(int i=0;i<s.size();i++){
    count[s[i]]++;
}
for(auto x : count){
    char ch = x.first;
    int freq = x.second;
    if(freq>1){
        cout<<ch<<" "<<freq<<endl;
    }
    else{
        continue;
    }
}
}

