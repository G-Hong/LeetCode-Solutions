class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int fnt = 0;
        int chk = 0;
        int temp;
        for( ; chk<nums.size(); chk++){
            if(nums[chk]!=0){
                temp = nums[chk];
                nums[chk] = 0;
                nums[fnt] = temp;
                fnt++;
            }
        }
        std::fill(nums.begin()+fnt, nums.end(), 0);        
    }
};