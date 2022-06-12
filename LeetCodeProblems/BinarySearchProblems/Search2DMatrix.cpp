class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Brute Force
//         for(int i = 0; i < matrix.size(); i++){
//             int left = 0, right = matrix[0].size() - 1;
//             while(left <= right){
//                 int mid = left + (right - left) / 2;
                
//                 if(matrix[i][mid] == target){
//                     return true;
//                 }
//                 if(matrix[i][mid] > target){
//                     right = mid - 1;
//                 }else{
//                     left = mid + 1;
//                 }
//             }
//         }
        
        int top = 0, bottom = matrix.size() - 1;
        int last = matrix[0].size() - 1;
        while(top <= bottom){
            int mid = top + (bottom - top) / 2;
        
            if(matrix[mid][last] < target){
                top = mid + 1;
            }else if(matrix[mid][0] > target){
                bottom = mid - 1;
            }else{
                break;
            }
        }
        
        if(!(top <= bottom)) return false;
        
        int left = 0, right = matrix[0].size() - 1;
        int s = (top + (bottom))/ 2;
        while(left <= right){
            int mid = left + (right - left) / 2;
            
            if(matrix[s][mid] < target){
                left = mid + 1;
            }else if(matrix[s][mid] > target){
                right = mid - 1;
            }else{
                return true;
            }
        }
        return false;
    }
};