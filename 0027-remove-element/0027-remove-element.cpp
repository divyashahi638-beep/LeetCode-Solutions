class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int i;
        int k=0;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            if(nums[i]==val)
            {
                count++;
            }
            else
            {
                nums[k]=nums[i];
                k++;
            }
            
        }
        return n-count;
    }
};