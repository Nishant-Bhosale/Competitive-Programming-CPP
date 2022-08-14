class Solution {
public:
    bool neighbour(string a, string b){
        int cnt = 0 ;
        for(int i = 0 ; i < a.length() ; i++)
        {
            if(a[i] != b[i])
            {
                cnt++ ;
            }
        }
        return cnt == 1 ;
    }
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        wordList.insert(wordList.begin(), beginWord);
        for(int i = 1 ; i < wordList.size() ; i++)
        {
            if(wordList[i] == wordList[0]) // string compare
            {
                wordList[i] = wordList.back() ;
                wordList.pop_back() ;
                break ;
            }
        }
        map<string, int> wti ; // word to index
        for(int i = 0 ; i < wordList.size() ; i++)
        {
            wti.insert({wordList[i], i}) ;
        }
        if(!wti.count(endWord)) 
        {
            return {} ;
        }
        vector<vector<int>> edges(wti.size()) ;
        for(int i = 0 ; i < wordList.size() ; i++)
        {
            for(int j = 0 ; j < wordList.size() ; j++)
            {
                if(i != j)
                {
                    if(neighbour(wordList[i], wordList[j]))
                    {
                        edges[i].push_back(j) ;
                    }
                }
            }
        }
        // BFS  
        int start_node = 0 , target_node = wti[endWord] , r = 0 , min_step = INT_MAX ;
        vector<int> vis(wordList.size(), INT_MAX) ;   
        vis[start_node] = 0 ;
        queue<int> q ;   
        q.push(start_node) ;
        while(!q.empty())
        {
            int sz  = q.size() ;
            for (int i = 0 ; i < sz ; i++)
            {
                int fr = q.front() ;  
                q.pop() ;
                if(fr == target_node)
                {
                    min_step = min(min_step , r) ;
                }
                for(int j = 0 ; j < edges[fr].size() ; j++)
                {
                    int update_node = edges[fr][j] ;
                    if(r + 1 < vis[update_node])
                    {
                        vis[update_node] = r + 1 ;
                        q.push(update_node);
                    }
                }
            }
            r++ ;
        }
        if(min_step == INT_MAX)
        {
            return {} ;
        }
        queue<vector<string>> q2 ; 
        q2.push({wordList[target_node]}) ;
        r = min_step ;
        while(r)
        {
             int sz  = q2.size() ;
             for(int i = 0 ; i < sz ; i++)
             {
                vector<string> seq = q2.front() ;
                q2.pop();
                string back = seq.back() ;
                int curr = wti[back] ;
                for (int j = 0 ; j < edges[curr].size() ; j++)
                {
                    int new_node = edges[curr][j] ;
                    if (vis[new_node] == r - 1)
                    {
                        seq.push_back(wordList[new_node]) ;
                        q2.push(seq) ;
                        seq.pop_back() ;
                    }
                }
            }
            r-- ;
        }
        vector<vector<string>> ans;
        while(!q2.empty())
        {
            vector<string> temp = q2.front() ;
            q2.pop() ;
            reverse(begin(temp) , end(temp)) ;
            ans.push_back(temp) ;
        }
        return ans ;
    }
};