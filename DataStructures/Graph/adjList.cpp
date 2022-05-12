#include<iostream>
#include<vector>

using namespace std;
class Graph{
    private:
    int vert;
    vector<int> *adjList;

    public:
    Graph(int vert){
        this->vert=vert;
        adjList=new vector<int>[vert];
    }

    void display(){
        for(int i=0; i<vert; i++){
             cout<<"Node "<<i;
            for(auto v : adjList[i]){
                cout<<"->"<<v;
            }
            cout<<endl;
        }
    }
    void addEdge(int origin, int dest){
        adjList[origin].push_back(dest);
        adjList[dest].push_back(origin);
    }

    void deleteEdge(int origin, int dest){
        for(int i=0; i<adjList[origin].size();i++){
            if(adjList[origin][i]==dest){
                adjList[origin].erase(adjList[dest].begin()+1);
                break;
            }
        }

        for(int i=0; i<adjList[dest].size(); i++){
            if(adjList[dest][i]==origin){
                adjList[dest].erase(adjList[origin].begin()+1);
                break;
            }
        }
    }
};

int main(){
Graph list(5);
list.addEdge(0,1);
list.display();
}