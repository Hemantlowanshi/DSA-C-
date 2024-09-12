#include<iostream>
#include<vector>
using namespace std ;
 int main(){ 

    int vertex , edges;
    cin>>vertex>>edges;

     vector<vector<bool>>Adjmatrix(vertex,vector<bool>(vertex,0));

     for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        Adjmatrix[u][v]=1;
     }
     
     for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<Adjmatrix[i][j];
        }
        cout<<endl;
     }
    
   }