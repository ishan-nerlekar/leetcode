class Solution {
public:
    int fib(int n) {
        int sum=0;
        sum=fibonacci(n,sum);
        return sum;
    }
    
    int fibonacci(int n,int sum){
        if(n<=1){
            return n;
        }
        sum=fibonacci(n-1,sum)+fibonacci(n-2,sum);
        return sum;
    }
};