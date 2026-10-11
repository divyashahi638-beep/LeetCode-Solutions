class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cm=1;
        int off=0;
        int res=1;
        while(cm<nums.size())
        {
            if(nums[cm]==nums[cm-1])
            {
                cm++;
                continue;

            }
            nums[off+1]=nums[cm];
            cm++;
            off++;
            res++;
            
        }
        return res;
    }
};