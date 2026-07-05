#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    int V , E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;
    vector<vector<int>>adj(V);

     cout << "Enter edges (u v):\n";
    for(int i =0; i<E;i++){
        int u , v;
        cin>> u >> v ;
        adj[u].push_back(v);
    }
    for(int i = 0; i<V ; i++){
        for(auto it : adj[i]){
        cout<<it;
    }
    }


    return 0;
}