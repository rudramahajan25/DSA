bool isPossible(vector<int> &boards, int n, int m, int mid)
{
    int count = 1;
    int pagesum = 0;
    for(int i = 0;i<n;i++)
    {
        if(pagesum+boards[i]<=mid)
        {
            pagesum+=boards[i];
        } else {
            count++;
            if (count > m || boards[i] > mid){
                return false;
            }
            pagesum = boards[i];
        }
    }
return true;
}
int findLargestMinDistance(vector<int> &boards, int m)
{
    int n = boards.size();
   int s = 0;
    int sum = 0;
    if(n<m)
    return -1;
    for(int i = 0;i<n;i++)
    {
        sum+= boards[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e)
    {
        if(isPossible(boards,n,m,mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else 
        {
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}