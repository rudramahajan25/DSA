#include <bits/stdc++.h> 
#include<algorithm>
int largestElement(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    return arr[n-1];
}