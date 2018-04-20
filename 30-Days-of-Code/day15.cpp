#include <iostream>
#include <cstddef>
using namespace std;    
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};

//
class Solution{
    public: 

        //Creates a new now and places data into it.
        Node * insert(Node *head,int data) {
            Node * newhead = new Node(data);
            if(head != NULL) {  //does until pointing at NULL
                Node *current = head;   //help from discussion
                while(current->next != NULL) {  //while the next pointer isn't equal to NULL
                  current = current->next;  //if not empty will continue the jump
                }
                current->next = newhead;
                return head;
            } else {
                return newhead;
            }
        }

      void display(Node *head){
          Node *start=head;
              while(start)
              {
                  cout<<start->data<<" ";
                  start=start->next;
              }
        }
};

int main(){
    Node* head=NULL;
    Solution mylist;

    int T,data;
    cin>>T;

    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }   
    mylist.display(head);
}
