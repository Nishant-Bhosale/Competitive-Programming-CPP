class Solution {
public:
    int mirrorReflection(int p, int q) {
        if(q == 0) return 0;
        
        while(p % 2 == 0 && q % 2 == 0){
            p /= 2;
            q /= 2;
        }
        
        return (1 - p % 2 + q % 2);
    }
};