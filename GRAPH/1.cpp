/*Types of graph
1.weighted and directed
2.weighted and undirected
3.unweighted and directed
4.unweighted and undirected
*/ 
// implementation of graph

#include<bits/stdc++.h>
#include<list> 

// we can also implement graph using hashmap

#include<unordered_map>
using namespace std;
class graph{
   list<int>* adj_list;
   int num_v; // no of vertices
   unordered_map<int,list<int>>adj_list1;
   
    public:

    graph(int v){
        num_v=v;
        adj_list=new list<int>[v];
       
    }
    void add_edge1(int u,int v,bool bidrec=true){
        adj_list[u].push_back(v);
        if(bidrec){
            adj_list[v].push_back(u);
        }
    }
    void add_edge2(int u,int v,bool bidrec=true){
        adj_list1[u].push_back(v);
        if(bidrec){
            adj_list1[v].push_back(u);
        }
    }
    void print(){
        for(int i=0;i<num_v;i++){
            cout<<i<<"-> ";
            for(auto neigh:adj_list[i]){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
        for(auto list:adj_list1){
            cout<<list.first<<"->";
            for(auto neigh:list.second){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
graph g(5);
g.add_edge1(0,1);
g.add_edge1(0,4);
g.add_edge1(1,2);                            
g.add_edge1(1,3);
g.add_edge1(1,4);
g.add_edge1(2,3);
g.add_edge1(4,3);

// for unordered map

g.add_edge2(0,1);
g.add_edge2(0,4);
g.add_edge2(1,2);                            
g.add_edge2(1,3);
g.add_edge2(1,4);
g.add_edge2(2,3);
g.add_edge2(4,3);
g.print();
return 0;
}

/*3->1 2 4 
0->1 4 
1->0 2 3 4 
4->0 1 3 
2->1 3 */

// list using stl
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
list<int>l;
for(int i=1;i<=10;i++)
     l.push_back(i);
for(int &i:l)
    i+=10;
for(int i:l)
     cout<<i<<" ";
cout<<endl;         
for(list<int>:: iterator it=l.begin(); it!=l.end();it++){
    cout<<&(*it)<<endl;
}    // we cant reverse print by just swaping begin and end
    // to reverse print we will use this method
for( list<int>::reverse_iterator it=l.rbegin(); it!=l.rend();it++){
    cout<<(*it)<<endl;
}  
// if we want to erase
cout<<endl;
auto it=l.begin();
for(;*it !=15;it++){

}
l.erase(it);
for( auto it=l.rbegin(); it!=l.rend();it++){
    cout<<(*it)<<endl;
} 
return 0;
} */
