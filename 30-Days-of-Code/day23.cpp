#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }
        
//------------------My Code---------------------//
(Note, mostly learnt from discussion but gained comprehension - see notebook for walkthrough and visuals)
        void levelOrder(Node * root){
        //Write your code here
        queue<Node *> q;
        Node * notRoot = root;
        
        while(notRoot != NULL){
            cout << notRoot->data << " ";    //print the first data (if at bottom we'd add the root to the q - which is redundant).
            
            if(notRoot->left != NULL) q.push(notRoot->left);    //if not empty then we can add it to the queue
            if(notRoot->right != NULL) q.push(notRoot->right);  //and so the same applies to the right side of the BST.
            
            notRoot = q.front();
            q.pop();
            //Assuming the BTS is actually populated.
        }
	}
};
//End of Solution

int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}