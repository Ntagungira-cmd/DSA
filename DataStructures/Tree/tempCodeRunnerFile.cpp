
        // }
};
int main(){
    BinaryTree bt;
    Node root=bt.addNode(NULL,1, false);
    Node left=bt.addNode(root,2, false);
    Node right=bt.addNode(root,7, true);
    Node leftleft=bt.addNode(left,5, false);