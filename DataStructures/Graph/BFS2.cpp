#include <iostream>
#include <vector>
#include<list>

using namespace std;

class Graph{
    private:
        int vert;  
        vector<int> *adj;

    public:

        Graph(int vert){
        this->vert=vert;
        adj=new vector<int>[vert];
        }
 
        void addEdge(int v, int w){
            adj[v].push_back(w);
            adj[w].push_back(v);
        }

        void printGraph(){
            for(int i=0; i<vert; i++){
            cout<<"Node "<<i;
            for(auto v : adj[i]){
                cout<<"->"<<v;
            }
            cout<<endl;
            }
        }
 
    void BFS(int s){
        vector<bool> visited;
        visited.resize(vert,false);
        list<int> queue;
        visited[s] = true;
        queue.push_back(s);

        while(!queue.empty()){
            s = queue.front();
            cout << s << " ";
            queue.pop_front();
             for (auto adjecent: adj[s]){
            if (!visited[adjecent]){
                visited[adjecent] = true;
                queue.push_back(adjecent);
            }
            }
        }; 
    }   
};

int main(){
 Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.printGraph();
    g.BFS(0);
    return 0;
}

