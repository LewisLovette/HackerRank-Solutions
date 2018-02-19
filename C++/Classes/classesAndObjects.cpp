// Write your Student class here
class Student{
    private:
        int scores[5];
        
    public:
        void input(){
            int a;
            for(int i = 0; i < 5; i++){
                cin >> a;
                scores[i] = a;
            }
        }
        int calculateTotalScore(){
            int sum;
            for(int i = 0; i<5; i++){
                sum += scores[i];
            }
            return sum;
        }
    
};