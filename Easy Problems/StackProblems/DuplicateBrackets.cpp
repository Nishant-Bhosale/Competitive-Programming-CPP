#include<iostream>
#include<stack>
using namespace std;

int main(){
   string str;
   stack<char> st;
    string ans = "false";
   getline(cin, str);

   for(int i = 0; i < str.size(); i++){
      char ch = str[i];
      if(ch == ')'){
         if(st.top() == '('){
            ans = "true";
         }else{
            while(st.top() != '('){
                st.pop();
            }
            st.pop();
         }
      }else{
         st.push(ch);
      }
   }

   cout<<ans;
   return 0;
}