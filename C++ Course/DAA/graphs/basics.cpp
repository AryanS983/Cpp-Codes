#include <bits/stdc++.h>
using namespace std;

class Graph{
public:
    unordered_map <int, list<int>> m1;
    void addEdge(int u, int v, bool dir = 0){
        m1[u].push_back(v);
        if(!dir){
            m1[v].push_back(u);
        }
    }
    
    void print(){
        for(auto i : m1){
            cout<< i.first << "->";
            for(auto j : i.second){
                cout<< j << " ";
            }
            cout <<endl;
        }
    }

    void bfs(int st){
        unordered_map <int, bool> visited;
        queue <int> q;

        q.push(st);
        visited[st] = true;
        cout << st << " ";
        while(!q.empty()){
            for(auto i: m1[q.front()]){
                if(!visited[i]){
                    q.push(i);
                    visited[i] =true;
                    cout << i << "  ";
                }
            }
            q.pop();
        }

    }

    //dfs using recursion
    void dfs(int st,unordered_map <int, bool> &visited){
        visited[st] = true;
        cout << st << " ";
        for(auto i : m1[st]){
            if(!visited[i]){
                dfs(i,visited);
            }
        }
    }


    void fri(int st){
        unordered_map <int, bool> visited;
        queue <int> q;
        q.push(st);
        visited[st] = true;
        for(auto i: m1[st]){
            visited[i] = true;
        }
        for(auto i: m1[st]){
            for(auto j : m1[i]){
                if(!visited[j]){
                    cout << j<< " ";
                }
            }
        }
    }

};
int main(){
    int n=5, e=5;
    // cout << "Enter the no of vertices : " <<endl;
    // cin >> n;
    // cout << "Enter the no of edges : " <<endl;
    // cin >> e;
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 3}, {2, 4}, {3, 4}};
    
    Graph g;
    for(int i = 0; i < e; i++){
        int u=edges[i][0], v=edges[i][1];
        g.addEdge(u, v, 0);
    }
    g.print();

    int st;
    while(st!= -1){
        cout << endl << "Enter the starting vertex for traversal : " <<endl;
        cin >> st;
        unordered_map <int, bool> visited;
        g.dfs(st,visited);
    }


}