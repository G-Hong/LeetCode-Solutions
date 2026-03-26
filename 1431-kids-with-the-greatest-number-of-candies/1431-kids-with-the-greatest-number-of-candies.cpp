#include <vector>
#include <algorithm>

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int t = *max_element(candies.begin(), candies.end()) - extraCandies;
        int i = 0;
        for (i=0; i < candies.size(); i++){
            if(candies[i] >= t){
                result.push_back(true);
            }
            else result.push_back(false);
        }
        return result;
    }
};