/*
Given an integer array nums, return the number of reverse pairs in the array.

A reverse pair is a pair (i, j) where:

0 <= i < j < nums.length and
nums[i] > 2 * nums[j].
 

Example 1:

Input: nums = [1,3,2,3,1]
Output: 2
Explanation: The reverse pairs are:
(1, 4) --> nums[1] = 3, nums[4] = 1, 3 > 2 * 1
(3, 4) --> nums[3] = 3, nums[4] = 1, 3 > 2 * 1
Example 2:

Input: nums = [2,4,3,5,1]
Output: 3
Explanation: The reverse pairs are:
(1, 4) --> nums[1] = 4, nums[4] = 1, 4 > 2 * 1
(2, 4) --> nums[2] = 3, nums[4] = 1, 3 > 2 * 1
(3, 4) --> nums[3] = 5, nums[4] = 1, 5 > 2 * 1
 

Constraints:

1 <= nums.length <= 5 * 104
-2^31 <= nums[i] <= 2^31 - 1
*/
class Solution {
private:
    void merge(vector<int>& nums, int low,int mid, int high, int &revpaircount){
       int j = mid+1;//index for 2nd arr;
       for(int i = low;i<=mid;i++)
       {
           while(j<=high && nums[i] > 2*(long long)nums[j]){
               j++;
           }
           revpaircount += j-(mid+1);
       }
       int n = high-low+1;
       vector<int> temp(n,0);
       int ind1 = low, ind2 = mid+1,k=0;
        while(ind1<=mid && ind2<=high){
            if(nums[ind1] < nums[ind2]){
                temp[k++] = nums[ind1++];
            }
            else{
                temp[k++] = nums[ind2++];
            }
        }
        while(ind1<=mid){
            temp[k++] = nums[ind1++]; 
        }
        while(ind2<=high){
            temp[k++] = nums[ind2++]; 
        }
        int m=0;
        for(int i=low; i<=high; i++){
            nums[i] = temp[m++];
        }
    }

    void mergeSort(vector<int>& nums, int low, int high, int &revpaircount) {
    if(low>=high)
    {
        return;
    }
        int mid = low + (high-low)/2;
        mergeSort(nums, low, mid, revpaircount);
        mergeSort(nums, mid+1, high, revpaircount);
        merge(nums, low, mid, high, revpaircount);
    
}
  public:
    int reversePairs(vector<int>& nums) {
        int revpaircount =0;
        int n = nums.size();
        if(n<=1) return revpaircount;
        mergeSort(nums, 0, n-1, revpaircount);
        return revpaircount;

    }
};