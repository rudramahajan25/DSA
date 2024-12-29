//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//function Template for C++

//Function to reverse the queue.
class Solution
{
  
    
    public:
    queue<int> rev(queue<int> q)
    {
          stack<int> s;
        // add code here.
        while(!q.empty())
        {
            int tem = q.front();
            q.pop();
            s.push(tem);
        }
        while(!s.empty())
        {
            int tem = s.top();
            s.pop();
            q.push(tem);
            
        }
        return q;
    }
};

//{ Driver Code Starts.
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    Solution ob;
    queue<int> a=ob.rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    
cout << "~" << "\n";
}
}
// } Driver Code Ends