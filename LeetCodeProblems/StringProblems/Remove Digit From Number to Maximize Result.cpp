class Solution {
public:
    string removeDigit(string number, char digit) {
        string a = "";
        for(int i = 0; i < number.size(); i++){
            if(number[i] == digit){
                string b = number.substr(0, i) + number.substr(i + 1);
                if(a == ""){
                    a = b; 
                }else{
                    a = max((b), (a));
                }
            }
        }
        
        return (a);
    }
};