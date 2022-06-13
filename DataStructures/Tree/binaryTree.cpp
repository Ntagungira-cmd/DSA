#include <iostream>
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

class BinaryTree{
    public:
        Node *root;
        BinaryTree(){
            this->root=NULL;
        }

        Node *addNode(Node * current, int data, bool isRight){
            Node *newNode= new Node(data);
           if(current==NULL){
                current=newNode;
           }else{
                if(isRight){
                     current->right=newNode;
                }else{
                     current->left=newNode;
                }
           }
           return newNode;
        }

        void printHierarchicalBinaryTree(Node *root){
            if(root==NULL){
                return;
            }
            cout<<root->data<<endl;
            printHierarchicalBinaryTree(root->left);
            printHierarchicalBinaryTree(root->right);
        }

        void inOrderTraversal(Node *root){
            if(root==NULL){
                return;
            }
            inOrderTraversal(root->left);
            cout<<root->data<<", ";
            inOrderTraversal(root->right);
        }

        void preOrderTraversal(Node *root){
            if(root==NULL){
                return;
            }
            cout<<root->data<<", ";
            preOrderTraversal(root->left);
            preOrderTraversal(root->right);
        }

        void postOrderTraversal(Node *root){
            if(root==NULL){
                return;
            }
            postOrderTraversal(root->left);
            postOrderTraversal(root->right);
            cout<<root->data<<", ";
        }
};

int main(){
    BinaryTree bt;
    Node *root=bt.addNode(NULL,1, false);
    Node *left=bt.addNode(root,2, false);
    Node *right=bt.addNode(root,7, true);
    Node *leftleft=bt.addNode(left,5, false);
    Node *leftright=bt.addNode(left,4, true);
    Node *leftleftright=bt.addNode(leftleft,3, true);
    Node *rightleft=bt.addNode(right,9, false);
    Node *rightright=bt.addNode(right,10, true);
    Node *rightrightleft=bt.addNode(rightright,3, false);
    Node *rightrightright=bt.addNode(rightright,15, true);

    cout<<"inOrder Traversal Binary Tree"<<endl;
    bt.inOrderTraversal(root);

    cout<<"preOrder Traversal Binary Tree"<<endl;
    bt.preOrderTraversal(root);

    cout<<"postOrder Traversal Binary Tree"<<endl;
    bt.postOrderTraversal(root);

    return 0;
    }