#include <bits/stdc++.h>
int findSecondLargest(int n, vector<int> &arr) {
    int i,first,second;
    sort(arr.begin(),arr.end());
    for(i=n-2;i>=0;i--)
    {
      if (arr[i] != arr[n - 1]) {
        return arr[i];
      }
      
    }
    return -1;
}