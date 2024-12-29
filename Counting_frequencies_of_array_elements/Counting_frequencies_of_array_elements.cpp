// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
void countFreq(vector<int>& arr)
{
    int n = arr.size();
    vector<bool> visit(n,false);
    for(int i = 0;i<n-1;i++)
    {
        if(visit[i]==true)
            continue;
        int count = 1;
        for (int j = i + 1; j < n-1; j++) {
            if (arr[i] == arr[j]) {
                visit[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}
int main() {
    // Write C++ code here
    vector<int> arr;
    int num,counter=0;
    while(counter<6)
    {
        cin>>num;
        arr.push_back(num);
        counter++;
    }
    countFreq(arr);
    
    return 0;
}