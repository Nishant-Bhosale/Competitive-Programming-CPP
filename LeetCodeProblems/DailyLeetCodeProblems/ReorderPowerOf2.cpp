const int TEN = 10;

class Solution {
vector<int> updateFreq(int n)
{
    vector<int> temp(10, 0);
    while (n) {
 
        int digit = n % TEN;

        temp[digit]++;
 
        n /= TEN;
    }
    return temp;
}


// Function to check if any permutation
// of a number is a power of 2 or not
bool isPowerOf2(int N)
{
    vector<int> freq = updateFreq(N);
    for (int i = 0; i < 31; i++) {
    
        if (freq == updateFreq(1 << i)) {
            return true;
        }
    }
    return false;
}
    
public:
    bool reorderedPowerOf2(int n) {
        return isPowerOf2(n);
    }
// public:
//     bool isPowerOfTwo (int x){
//     return x && (!(x&(x-1)));
// }
};