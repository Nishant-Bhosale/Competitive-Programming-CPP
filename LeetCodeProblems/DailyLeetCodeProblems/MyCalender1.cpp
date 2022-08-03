class MyCalendar {
    map<int, int> mp;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
//         pair<int,int> p;
//         p.first = start;
//         p.second = end - 1;
//         if(mp.count(p)){
//             return false;
//         }
        
//         for(auto it : mp){
//             if((start >= it.first.first && start <= it.first.second) || (end - 1 >=                      it.first.first && end - 1 <= it.first.second)){
//                 return false;
//             }
//         }
        
//         mp[p]++;
        for(auto& [s2, e2] : mp) 
            if( !(start >= e2 || s2 >= end) )   
			    return false; 
            mp[start] = end;                 
      
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */