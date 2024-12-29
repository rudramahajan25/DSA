//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        stack<int>st;
        vector<int>ans;
        int n = q.size();
        for(int i = 0;i<n/2;i++)
        {
            int val = q.front();
            q.pop();
            st.push(val);
        }
        for(int i = 0;i<n/2;i++)
        {
            int val = st.top();
            st.pop();
            q.push(val);
        }
        for(int i = 0;i<n/2;i++)
        {
            int val = q.front();
            q.pop();
            q.push(val);
        }
        for(int i = 0;i<n/2;i++)
        {
            int val = q.front();
            q.pop();
            st.push(val);
        }
       while(!st.empty())
        {
            int val = st.top();
            st.pop();
            ans.push_back(val);
            val = q.front();
            q.pop();
            ans.push_back(val);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    
cout << "~" << "\n";
}
    
    return 0;
}
// } Driver Code Ends