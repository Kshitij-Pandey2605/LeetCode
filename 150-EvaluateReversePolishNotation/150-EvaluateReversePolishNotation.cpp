// Last updated: 7/31/2026, 9:23:50 PM
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
      
      stack<int>st;

        for(int i=0;i<tokens.size();++i){
          if(tokens[i]=="+"||tokens[i]=="*"||tokens[i]=="/"||tokens[i]=="-"){

             int a = st.top();
             st.pop();
             int b = st.top();
             st.pop();

             if(tokens[i]=="+"){
                st.push(b+a);
             }
               if(tokens[i]=="*"){
                st.push(b*a);
             }
               if(tokens[i]=="/"){
                st.push(b/a);
             }
               if(tokens[i]=="-"){
                st.push(b-a);
             }





          }

          else{
            st.push(stoi(tokens[i]));
          }

        
      
    }
      return st.top();
    }
};