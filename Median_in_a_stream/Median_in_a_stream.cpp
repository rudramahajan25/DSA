#include <bits/stdc++.h> 
#include<queue>
int signum(int a,int b)
{
	if(a == b)
		return 0;
	else if(a > b)
		return 1;
	else
		return -1;
}
void callMedian(int element,priority_queue<int> &maxi, priority_queue<int,vector<int>,greater<int>> &mini, int &median)
{
	switch(signum(maxi.size(),mini.size()))
	{
		case 0: if(element > median){
					mini.push(element);
					median = mini.top();
				}
				else{
					maxi.push(element);
					median = maxi.top();
				}
				break;
		case 1: if(element > median){
					mini.push(element);
					median =(mini.top() + maxi.top())/2;
				}
				else{
					mini.push(maxi.top());
					maxi.pop();
					maxi.push(element);
					median =(mini.top() + maxi.top())/2;
				}
				break;
		case -1:
				if (element > median) {
                	maxi.push(mini.top());
					mini.pop();
					mini.push(element);  
					median =(mini.top() + maxi.top())/2;
                    } 
				else {
                     maxi.push(element);
                     median = (mini.top() + maxi.top()) / 2;
                     }
                    break;
    }
}
vector<int> findMedian(vector<int> &arr, int n){
	
	// Write your code here 
	vector<int>ans;
	int median = -1;
	priority_queue<int>maxHeap;
	priority_queue<int,vector<int>,greater<int> >minHeap;
	for(int i = 0;i<n;i++)
	{
		callMedian(arr[i], maxHeap, minHeap, median);
		ans.push_back(median);
	}
	return ans;	
}