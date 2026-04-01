// class Solution {
// public:
//     bool increasingTriplet(vector<int>& nums) {
//         //ans[3] -> ans[0] is nums[0] in initial
//         //if nums[i+1] is same or smaller, ans[0] = nums[i+1]
//         // else  ans[1] = nums[i+1] and so on..
//         vector<int> ans(3, 0);
//         int cnt = 1;
//         ans[0] = nums[0];
//         ans[1] = nums[0];
//         for(int i = 0; i<nums.size(); i++){
//             if(ans[cnt]>nums[i] && ans[cnt-1]<nums[i]){
//                 ans[cnt] = nums[i];
//                 if(cnt==1) ans[cnt] = nums[i];
//             }
//             else if(ans[cnt]<nums[i]){
//                 cnt++;
//                 if(cnt==3) return true;
//                 ans[cnt] = nums[i];
//             }
//             if(cnt==3) return true;

//         }

//         return false;
//     }
// };


class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // 아주 큰 값(무한대)으로 초기화
        int first = INT_MAX;  
        int second = INT_MAX; 

        // 배열의 숫자를 하나씩 꺼내어 확인
        for (int num : nums) {
            if (num <= first) {
                // 1. 지금까지 본 수 중 가장 작거나 같다면 1단 계단 갱신
                first = num; 
            } 
            else if (num <= second) {
                // 2. 1단보다는 크지만, 기존 2단 계단보다 작거나 같다면 갱신
                second = num; 
            } 
            else {
                // 3. 1단(first)보다 크고, 2단(second)보다 큰 숫자를 드디어 만났다!
                // 즉, 조건에 맞는 3개의 증가하는 숫자를 찾았으므로 true 반환
                return true; 
            }
        }

        // 끝까지 다 훑었는데도 3단 계단을 완성하지 못했다면 false 반환
        return false;
    }
};