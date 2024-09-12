#include<iostream>
#include<vector>
using namespace std ;
 int main(){ 
    int vertex,edges;
    cin>>vertex>>edges;

    vector<pair<int,int>>adj[vertex];

    for(int i=0;i<edges;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back(make_pair(v,wt));
        adj[v].push_back(make_pair(u,wt));
    }

    for(int i=0;i<vertex;i++){
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j].first<<" "<<adj[i][j].second<<" ";
        }
        cout<<endl;
    }

   }