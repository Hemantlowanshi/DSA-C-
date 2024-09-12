#include<iostream>
#include<vector>
using namespace std ;
 int main(){ 
    int vertex , edges;
    cin>>vertex>>edges;
    vector<vector<bool>>adjamatrix(vertex,vector<bool>(vertex,0));
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adjamatrix[u][v]=1;
        adjamatrix[v][u]=1;
    }
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<adjamatrix[i][j];
        }
        cout<<endl;
    }
   }