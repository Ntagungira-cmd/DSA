#include <iostream>
using namespace std;

class adjMatrix{

    private:
    int nodes;
    int **matrix;

    public:
    adjMatrix(int nodes){
        this->nodes=nodes;
        matrix=new int *[nodes];
        for (int i = 0; i < nodes; i++) {
            matrix[i] = new int[nodes];
            for (int j = 0; j < nodes; j++)
                matrix[i][j] = 0;
        }
    }
    void display(){
        for(int i=0;i<nodes; i++){
            for(int j=0; j<nodes; j++)
                cout<<matrix[i][j]<<"   ";
            cout<<""<<endl;
        }
    }
    void addEdge(int origin, int dest) {
        if(origin<0||dest<0||origin>nodes||dest>nodes){
          cout<<"Invalid node"<<endl;
          return;
        }
        matrix[origin][dest] = 1;
        // matrix[dest][origin] = 1;
  }

  void removeEdge(int origin, int dest) {
        if(origin<0||dest<0||origin>nodes||dest>nodes){
          cout<<"Invalid node"<<endl;
          return;
        }
        matrix[origin][dest] = 0;
        // matrix[dest][origin] = 0;
  }
};

int main() {
  adjMatrix graph(4);
  graph.display();
  cout<<"add edge to graph"<<endl;
  graph.addEdge(1,1);
  graph.display();
  cout<<"remove edge to graph"<<endl;
  graph.removeEdge(1,1);
  graph.display();
}