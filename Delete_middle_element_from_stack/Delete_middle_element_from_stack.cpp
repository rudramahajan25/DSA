#include <bits/stdc++.h> 
void deletefun(stack<int>&inputStack,int count,int N){
  if (count == N / 2) {
    inputStack.pop();
    return;
  }
  int num = inputStack.top();
  inputStack.pop();
  deletefun(inputStack,count+1,N);
  inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count = 0;
   deletefun(inputStack,count,N);
   
}