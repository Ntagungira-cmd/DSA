#include<iostream>
#include<vector>
#include<list>

using namespace std;

struct Node{
    int value;
    Node * parent;
    vector<Node *> children;
};

Node *addNode(Node *parent, int value){
    Node *newNode= new Node();
    newNode->value=value;
    newNode->parent=parent;

    if(parent!=NULL){
        parent->children.push_back(newNode);
    }
    return newNode;
};

void BFSdisplay(Node *root){
    list<Node * >que;
    que.push_back(root);
    while(!que.empty()){
        Node* curr = que.front()
        cout<<curr->value<<endl;
        for(auto i : curr->children){
            que.push_back(i);
        }
        que.pop_front();
    }
};

int main(){
    Node *root=addNode(NULL,4);
    Node *firstChild=addNode(root,3);
    Node *secondChild=addNode(root,5);
    Node *thirdChild=addNode(firstChild,7);
    Node *fourthChild=addNode(secondChild,9);
    BFSdisplay(root);
}
