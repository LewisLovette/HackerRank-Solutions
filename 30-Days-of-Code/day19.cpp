//Write your code here
class Calculator : public AdvancedArithmetic {
    public:
        int divisorSum(int n) override{
            int sum;
            for(int i = 1; i <= n; i++){
                if(n % i == 0) sum+=i;
            }
            
            return sum;
        }
};