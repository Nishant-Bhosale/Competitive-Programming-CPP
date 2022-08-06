class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
       int pigs = 0;
        while(pow((minutesToTest / minutesToDie + 1), pigs) < buckets){
            pigs += 1;          
        }
        return pigs; 
    }
};