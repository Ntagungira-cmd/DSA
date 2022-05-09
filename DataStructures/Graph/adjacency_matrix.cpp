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
};

int main() {
  adjMatrix graph(4);
  graph.display();
}