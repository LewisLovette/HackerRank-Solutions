int getHeight(Node* root){
  //Write your code here
    //cout << root << endl;     testing where root head is
    int left = 0, right = 0;
    //Goes down each side of the tree (left or right) and gets it's number of edges (nodes excluding root);
    if(root->left != NULL) left = getHeight(root->left) + 1;
    if(root->right != NULL) right = getHeight(root->right) + 1;
    
    //Then compare the largest and return it.
    return (left > right) ? left : right;
    
}

