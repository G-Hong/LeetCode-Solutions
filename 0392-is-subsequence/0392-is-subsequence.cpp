class Solution {
public:
    bool isSubsequence(string s, string t) {
        int chk = 0;
        for(int i = 0; i<s.size();i++){
            while(1){
                if(chk>=t.size()){
                    return false;
                }
                if(chk<t.size() && t[chk]==s[i]){
                    chk++;
                    break;
                }
                else chk++;
            }
        }
        return true;        
    }
};