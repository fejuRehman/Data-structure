#include<bits/stdc++.h>
#include<list>
#include<unordered_map>
using namespace std;
template<typename T>
class graph{
  unordered_map<T,list<T>> adj_list;
  public:
   void add_edge(T u,T v,bool bidrec=true){
        adj_list[u].push_back(v);
        if(bidrec){
            adj_list[v].push_back(u);
        }
    }  
    void print(){
        for(auto node:adj_list){
            cout<<node.first<<"-> ";
            for(auto neigh:node.second){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }
    void bfs(T src){
        queue<T>q;
        unordered_map<T,bool>visited;
        q.push(src);
        visited[src]=true;
        cout<<"BFS"<<endl;
        while(!q.empty()){
            T node=q.front();
            q.pop();
            cout<<node<<" ";
            for(auto neigh:adj_list[node]){
                if(visited[neigh]==false){
                    q.push(neigh);
                    visited[neigh]=true;
                }
            }

        }
        cout<<endl;
    }
    void dfs_helper(T src,unordered_map<T,bool> &visited){
        visited[src]=true;
        cout<<src<<" ";
        for(auto neigh:adj_list[src]){
            if(!visited[neigh]){
                dfs_helper(neigh,visited);
            }
        }
    }
    void dfs(T src){
        unordered_map<T,bool>visited;
        dfs_helper(src,visited);

    }
};

int main(){
graph<int>g;
/*
g.add_edge("Modi","Trump");
g.add_edge("Modi","Yogi");
g.add_edge("Prabhu","Modi",false);
g.add_edge("Yogi","Prabhu",false);
g.add_edge("Putin","Trump",false);
g.add_edge("Putin","Modi",false);
g.add_edge("Putin","pope",false);
//g.print();
g.bfs("Modi");
*/
	g.add_edge(0, 1);
	g.add_edge(0, 4);
	g.add_edge(1, 2);
	g.add_edge(2, 4);
	g.add_edge(2, 3);
	g.add_edge(3, 5);
	g.add_edge(3, 4);
    g.bfs(0);
    g.dfs(0);

return 0;
}