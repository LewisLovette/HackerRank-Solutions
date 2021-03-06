//Write your code here
class Calculator{
    public:
        int power(int n,int p){
            int pow = n;
            if(n < 0 or p < 0){
                throw runtime_error("n and p should be non-negative");
            } else if(p == 0){
                return 1;   //as anything **0 = 1
            }

            for(int i = 0; i < p-1; i++){//-1 as first pow is == original
                pow *= n;
            }

            return pow;
        }
};