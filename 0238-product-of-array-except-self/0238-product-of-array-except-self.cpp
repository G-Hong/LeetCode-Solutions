// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int> answer(nums.size());
//         int tot = 1;
//         for(int i=0; i<nums.size(); i++){
//             for(int j=0; j<nums.size(); j++){
//                 if(i!=j){
//                     tot *= nums[j];
//                 }
//             }
//             answer[i] = tot;
//             tot = 1;
//         }
//         return answer;
//     }
// };

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int tot = 1;
        int cnt = 0;
        for(int i: nums){
            if(i!=0 && cnt<2){
                tot *= i;
            }
            else if(cnt>=2){
                tot = 0;
                break;
            }
            else cnt++;
        }
        
        if(cnt==1){
            for(int j=0; j<nums.size(); j++){
                if(nums[j]!=0){
                    nums[j] = 0;
                }
                else nums[j]=tot;
            }
        }
        else if(cnt>=2){
            for(int j=0; j<nums.size(); j++){
                nums[j] = 0;
            }
        }
        else{
            for(int j=0; j<nums.size(); j++){
                nums[j] = tot/nums[j];
            }
        }
        return nums;
    }
};