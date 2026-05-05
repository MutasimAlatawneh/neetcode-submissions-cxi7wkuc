class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int a= (st.top());
                st.pop();
                int b= (st.top());
                st.push(a);
                a=a+b;

                 st.push(a);
                }
            else if(operations[i]=="C"){
                st.pop();
            }
            else if(operations[i]=="D"){
                int a= (st.top());
                st.pop();
                st.push(a);
                a*=2;
                 
                st.push(a);
             }
            else{
                int a=stoi(operations[i]);
                st.push(a);
            }
            
        }
        int ans=0;
        while(!st.empty()){
             
        
            ans+=st.top();
           
            st.pop();
        }
        return ans;
    }
};