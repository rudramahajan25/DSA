#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  // Write your code here
  stack<char>stack;
  if(str.length()%2!=0)
    return -1;
    
  for(char ch:str)
  {
    if(ch=='{')
      stack.push(ch);
    else
    {
      if(!stack.empty() && stack.top() == '{')
      {
        stack.pop();
      }
      else
      stack.push(ch);
    }
   
  }
  int a = 0,b = 0;
  while(!stack.empty())
  {
    if(stack.top()=='{')
      b++;
    else
      a++;

    stack.pop();
  }

  return ((a+1)/2+(b+1)/2);

}