#include<iostream>
#include<vector>
using namespace std ;
 int main(){ 

    int vertex,edges;
    cin>>vertex>>edges;

    vector<int>Adjacencylist[vertex];

    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        Adjacencylist[u].push_back(v);
        Adjacencylist[v].push_back(u);
    }

    for(int i=0;i<vertex;i++){
        cout<<i<<"->";
        for(int j=0;j<Adjacencylist[i].size();j++){
            cout<<Adjacencylist[i][j];
        }
        cout<<endl;
    }

   }