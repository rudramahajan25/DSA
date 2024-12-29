#include <bits/stdc++.h> 
void solve(stack<int>& myStack,int count,int x)
{
    if(myStack.empty())
    {
        myStack.push(x);
        return ;
    }
    int num = myStack.top();
    myStack.pop();
    solve(myStack,count+1,x);
    myStack.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    int count = 0;
    solve(myStack,count,x);
    return  myStack;
}