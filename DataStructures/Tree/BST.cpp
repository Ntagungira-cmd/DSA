#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};

class BinarySearchTree{
    public:
        Node *root;
        BinarySearchTree(){
            this->root=NULL;
        }
        Node *addNode(Node * root, int data){
            if(root==NULL){
                root=new Node(data);
            }else{
                if(data<root->data){
                    root->left=addNode(root->left,data);
                }else{
                    root->right=addNode(root->right,data);
                }
            }
            return root;
        }
        void inOrderTraversal(Node *root){
            if(root==NULL){
                return;
            }
            inOrderTraversal(root->left);
            cout<<root->data<<", ";
            inOrderTraversal(root->right);
        }     
};  

int main(){
    BinarySearchTree bst;
    Node *root=NULL;
    root=bst.addNode(root,10);
    root=bst.addNode(root,100);
    root=bst.addNode(root,5);
    root=bst.addNode(root,3);
    root=bst.addNode(root,2);
    root=bst.addNode(root,8);
    root=bst.addNode(root,7);
    root=bst.addNode(root,9);
    root=bst.addNode(root,40);
    root=bst.addNode(root,200);
    root=bst.addNode(root,70);
    root=bst.addNode(root,60);
    // bst.addNode(root,10);
    // bst.addNode(root,100);
    // bst.addNode(root,5);
    // bst.addNode(root,3);
    // bst.addNode(root,2);
    // bst.addNode(root,8);
    // bst.addNode(root,7);
    // bst.addNode(root,9);
    // bst.addNode(root,40);
    // bst.addNode(root,200);
    // bst.addNode(root,70);
    // bst.addNode(root,60);
    bst.inOrderTraversal(root);
}