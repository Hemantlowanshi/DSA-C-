#include<iostream>
#include<vector>
using namespace std ;
 int main(){ 

    int vertex , edges;
    cin>>vertex>>edges;

     vector<vector<int>>Adjmatrix(vertex,vector<int>(vertex,0));

     for(int i=0;i<edges;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        Adjmatrix[u][v]=wt;
     }
     
     for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<Adjmatrix[i][j];
        }
        cout<<endl;
     }
    
   }