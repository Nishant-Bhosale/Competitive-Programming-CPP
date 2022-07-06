class Solution {
public:
    int fib(int n) {
        // return calculateFib(n);
        if(n < 2){
            return n;
        }
        
        int a = 0, b = 1, ans = 0;
        for(int i = 1; i < n; i++){
            ans = a + b;
            a = b;
            b = ans;
        }
        
        return ans;
    }
// public: 
//     int calculateFib(int n){
//         // int ans = 0, temp = 0;
        
//         if(n == 0){
//             return 0;
//         }
//         if(n == 1){
//             return 1;
//         }
        
//         return calculateFib(n - 1) + calculateFib(n - 2);
//     }
};