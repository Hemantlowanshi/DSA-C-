#include<iostream>
using namespace std;

int main(){

    int arr[] = {2, 7, 6, 1, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    int maxl = 0;
    int count = 0;

    for(int i=0;i<n;i++){
    int sum = 0;
    for(int j=i;j<n;j++){
           sum+=arr[j];
           if(sum%k==0){
            maxl = max(maxl,j-i+1);
           }                                                              
       }
    }

    cout<<maxl;
    
    }