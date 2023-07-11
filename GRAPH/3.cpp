#include<bits/stdc++.h>
#include<unordered_map>
using namespace std ;
template<typename T>
class graph{
    unordered_map<T,list<pair<T,int>>>umap;
    public:
   void add_edge(T u,T v,int dist,bool bidirec=true){
        umap[u].push_back(make_pair(v,dist));
        if(bidirec){
            umap[v].push_back(make_pair(u,dist));
        }
    }
    void print(){
         for(auto node: umap){
         cout<<node.first<<"->";
        for(auto neighbor:node.second){
            cout<<"( "<<neighbor.first<<" "<<neighbor.second<<") ";
        }
        cout<<endl;
    }
    }
    void djikstra(T src){
        set<pair<int,T>>s;
        unordered_map<T,int>dist;    
        s.insert(make_pair(0,src));
        for(auto node:umap){
            dist[node.first]=INT_MAX;   
        }
        dist[src]=0;
        while(!s.empty()){
            auto front_add=s.begin();
            T node=(*front_add).second;
            int node_dist=(*front_add).first; 
            s.erase(s.begin());
            dist[node]=node_dist;
            // ab neighbour insert krna h set me
            for(auto neighbour_pair:umap[node]){
                T neighbour=neighbour_pair.first;
                int nn_dist=neighbour_pair.second;
                // ab check kr k ye neighbour pehle se hi inserted to nhi h set me
                auto neighbour_add=s.find(make_pair(dist[neighbour],neighbour));
                if(neighbour_add!=s.end()){
                    //address mil gya h ab insert tab krna h jab distance dusri node se minimum ho
                 if(dist[node]+nn_dist<dist[neighbour])  {
                       s.erase(neighbour_add);
                    s.insert(make_pair(dist[node]+nn_dist,neighbour));
                    dist[neighbour]=dist[node]+nn_dist;
                 }

                }
                 else if(dist[neighbour]==INT_MAX){
                    s.insert(make_pair(dist[node]+nn_dist,neighbour));
                    dist[neighbour]=dist[node]+nn_dist;
                 }
            }


            
        }
        for(auto node:dist){
            cout<<node.first<<" "<<node.second <<endl;
        }
    }

};
int main(){
graph<string>g;
g.add_edge("amritsar","agra",1);
g.add_edge("amritsar","jaipur",4);
g.add_edge("delhi","jaipur",2);
g.add_edge("mumbai","jaipur",8);
g.add_edge("mumbai","bhopal",3);
g.add_edge("agra","bhopal",2);
g.add_edge("agra","delhi",1);
g.print();
cout<<endl<<endl;
g.djikstra("agra");
return 0;
}