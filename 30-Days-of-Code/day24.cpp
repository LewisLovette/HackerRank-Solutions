            Node* removeDuplicates(Node *head)
            {   
                //Write your code here
                Node * nextPos = head;
                while(nextPos->next != NULL){
                    if(nextPos->data == nextPos->next->data){
                        Node * temp = nextPos->next;    //So we can delete allocated memory
                        nextPos->next = nextPos->next->next;    //skips over next node onto the node after the next.
                        delete temp;                    //Deleting the node from memory
                    }else{
                        nextPos = nextPos->next;    //No duplicates = step through list.
                    }
                }
                return head;
            }