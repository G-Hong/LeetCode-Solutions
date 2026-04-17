// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int max = 0;
//         int temp;
//         for(int i = 0; i<height.size(); i++){
//             for(int j = 0; j<height.size(); j++){
//                 temp = min(height[i], height[j])*(i-j);
//                 if(temp>max){
//                     max = temp;
//                 }
//             }
//         }
//         return max;
//     }
// };
// 면적이 커질 가능성이 있는 쪽으로 이동인거지 확실히 더 커지는 쪽으로 이동하는게 아님..
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0;
        int temp;
        int i = 0;
        int j = height.size()-1;
        while(i!=j){
            temp = (j-i)*min(height[i], height[j]);
            if(max<temp){
                max = temp;
            }
            if(height[i]<=height[j]){
                i++;
            }
            else j--;
        }
        return max;
    }
};