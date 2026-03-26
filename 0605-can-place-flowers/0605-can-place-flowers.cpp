/*
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        //attatch 0 infront and back of flowerbed
        //count consecutive 0 and make as array cnt
        //-1 to all cnt values and divide with 2
        //if total num of values in cnt smaller than n, false else True
        int t = 0, tot = 0;
        vector<int> cnt;
        flowerbed.push_back(0);
        flowerbed.insert(flowerbed.begin(),0);
        for (int f : flowerbed){
            if(f == 0){
                t++;
            }
            else{
                cnt.push_back(t);
                t=0;
            }
        }
        cnt.push_back(t);

        for (int c : cnt){
            tot += (c-1)/2;
        }
        if (tot<n) return false;
        else return true;


    }
};
*/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        //Greedy Algorithm

        for (int i=0; i<flowerbed.size(); i++){
            if(n==0){
                return true;
            }
            if(flowerbed[i]==0 && (i==0 || flowerbed[i-1]==0) && (i==flowerbed.size()-1 || flowerbed[i+1]==0)){
                flowerbed[i] = 1;
                n -= 1;
            }
        }
        return n<=0;
    }
};