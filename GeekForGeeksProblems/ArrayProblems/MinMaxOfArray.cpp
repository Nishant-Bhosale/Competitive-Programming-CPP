
struct pair getMinMax(long long int arr[], long long int n) {
    struct pair minMax;
    
    minMax.min = arr[0];
    minMax.max = arr[0];
    
    for(int i = 0; i < n; i++){
        if(arr[i] > minMax.max){
            minMax.max = arr[i];
        }
        if(arr[i] < minMax.min){
            minMax.min = arr[i];
        }
    }
    
    return minMax;
}