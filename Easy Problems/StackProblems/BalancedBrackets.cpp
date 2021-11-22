#include<iostream>
#include<stack>
using namespace std;

bool handleBrackets(stack<char> &st, char bracket){
   if(st.size() == 0){
      return false;
   }else if(st.top() != bracket){
      return false;
   }else{
      st.pop();
      return true;
   }
}

int main(){
   string str;
   stack<char> st;
   getline(cin, str);
   for(int i = 0; i < str.size(); i++){
      char ch = str[i];

      if(ch == '(' || ch == '[' || ch == '{'){
         st.push(ch);
      }else if(ch == ')'){
         bool answer = handleBrackets(st, '(');
         if(answer == false){
             cout<<"false";
             return 0;
         }
      }else if(ch == ']'){
         bool answer = handleBrackets(st, '[');
         if(answer == false){
             cout<<"false";
             return 0;
         }
      }else if(ch == '}'){
         bool answer = handleBrackets(st, '{');
         if(answer == false){
             cout<<"false";
             return 0;
         }
      }
   }

    if(st.size() == 0){ 
        cout<<"true";
    }
    else{
        cout<<"false";
    }
   return 0;
}