vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int x; int y;
    long long a1; long long b1;
    long long sum=0; long long square_sum=0;
    int n=A.size();
    long long actual_sum=(long long)n*(long long)(n+1)/2;
    long long actual_square_sum=(long long)n*(long long)(n+1)*(long long)(2*n+1)/6; int i;
    
    for(i=0;i<A.size();i++)
    {
        sum=(long long)sum+(long long)A[i]; square_sum=(long long)square_sum+(long long)A[i]*(long long)A[i];
    }
    
    a1=(long long)actual_sum-(long long)sum;    b1=(long long)actual_square_sum-(long long)square_sum;
    x=((long long)b1-(long long)a1*(long long)a1)/(2*a1);  y=(long long)a1+(long long)x;
    
    vector<int> result(2);
    result[0]=x; result[1]=y;
    return result;
}
