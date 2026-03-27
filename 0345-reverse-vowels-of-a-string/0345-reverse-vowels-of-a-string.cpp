class Solution {
public:
    string reverseVowels(string s) {
        // for i=0 till string size
        //  if s[i] = vowel than
        //      for j=string size till 0 j--
        //          if s[j]=vowel than switch s[i] and s[j] + break
        int k = s.length();
        int l = 0;
        char temp;
        for(int i=l; i<k; i++){
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U'){
                for(int j = k; j>l; j--){
                    if (s[j] == 'a' || s[j] == 'A' || s[j] == 'e' || s[j] == 'E' || s[j] == 'i' || s[j] == 'I' || s[j] == 'o' || s[j] == 'O' || s[j] == 'u' || s[j] == 'U'){
                        temp = s[i];
                        s[i] = s[j];
                        s[j] = temp;
                        k=j-1;
                        l++;
                        // std::cout << s << std::endl;
                        // std::cout << i << j << std::endl;
                        break;
                    }
                }
                if(k==l) break;
            }
        } 
        return s;
    }
};