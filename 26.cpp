class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!nums.size())return 0;
        int tmp = 0;
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] != nums[tmp])
                nums[++tmp] = nums[i];
        return tmp + 1;
    }
};