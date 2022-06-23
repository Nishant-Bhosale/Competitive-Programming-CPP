class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(), courses.end(), compare);
        
//         int time = 0, count = 0;
        
//         for(int i = 0; i < courses.size(); i++){
//             if(time + courses[i][0] <= courses[i][1]){
//                 time += courses[i][0];
//                 courses[count++] = courses[i];
//             }else{
//                 int max = i;
//                 for(int j = 0; j < count; j++){
//                     if(courses[j][0] > courses[max][0]){
//                         max = j;
//                     }
//                 }
//                 if(courses[max][0] > courses[i][0]){
//                     time += courses[i][0] - courses[max][0];
//                     courses[max] = courses[i];
//                 }
                
//             }
//         }
        
        priority_queue<int> pq;
        
        int time = 0;
        
        for(auto course : courses){
            if(time + course[0] <= course[1]){
                pq.push(course[0]);
                time += course[0];
            } else if(pq.size() && pq.top() > course[0]){
                int p = pq.top();
                pq.pop();
                time += course[0] - p;
                pq.push(course[0]);
            }
        }
        
        return pq.size();
    }
    
public:
    static bool compare(vector<int> a, vector<int> b){
        return a[1] < b[1];
    }
};