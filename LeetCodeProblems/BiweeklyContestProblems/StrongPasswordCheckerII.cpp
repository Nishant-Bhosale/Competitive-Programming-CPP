class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.size() < 8) return false;
        
        for(int i = 0; i < password.size() - 1; i++){
            if(password[i] == password[i + 1]){
                return false;
            }
        }
        string sp = "!@#$%^&*()-+";
        bool uFlag = false;
        bool lFlag = false;
        bool dFlag = false, alphaFlag = false;
        for(int i = 0; i < password.size(); i++){
            if(isupper(password[i])) uFlag = true;
            if(islower(password[i])) lFlag = true;
            if(isdigit(password[i])) dFlag = true;
            for(int j = 0; j < sp.size(); j++){
                if(password[i] == sp[j]) alphaFlag = true;
            }
        }
        
        if(uFlag && lFlag && dFlag && alphaFlag) return true;
        
        
        return false;
    }
};