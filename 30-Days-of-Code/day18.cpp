#include <iostream>
#include <vector>

using namespace std;

class Solution {
    //Write your code here
    private:
        vector<char> stack, queue;
    public:
        void pushCharacter(char c){
            stack.push_back(c);
        }
        void enqueueCharacter(char c){
            queue.push_back(c);
        }
        char popCharacter(){
            char temp = stack[stack.size()-1];
            stack.pop_back();
            return temp;
        }
        char dequeueCharacter(){
            char temp = queue[0];
            queue.erase(queue.begin());
            return temp;
        }
};
