class Solution {
public:
    int compress(vector<char>& chars) {
        int cnt = 1;
        int t = 0;
        for(int i=0; i<chars.size()-1; i++){
            if(chars[i]==chars[i+1]){
                cnt++;
            }
            else {
                chars[t]=chars[i];
                t++;
                if(cnt>1){
                    string s = to_string(cnt);
                    for(char c: s){
                        chars[t] = c;
                        t++;
                    }
                    cnt = 1;
                }
                
            }

        }
        chars[t]=chars[chars.size()-1];
        t++;
        if(cnt>1){
            string s = to_string(cnt);
            for(char c: s){
                chars[t] = c;
                t++;
            }
            cnt = 1;
        }

        return t;
    }

};